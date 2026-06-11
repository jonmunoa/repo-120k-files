<template>
  <section class="panel-2565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2565");
const base = ref(2565);
const total = computed(() => base.value * 2);

function incrementar2565() {
  base.value++;
}
</script>

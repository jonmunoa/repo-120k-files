<template>
  <section class="panel-3565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3565");
const base = ref(3565);
const total = computed(() => base.value * 2);

function incrementar3565() {
  base.value++;
}
</script>

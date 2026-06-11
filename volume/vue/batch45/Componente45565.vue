<template>
  <section class="panel-45565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45565");
const base = ref(45565);
const total = computed(() => base.value * 2);

function incrementar45565() {
  base.value++;
}
</script>

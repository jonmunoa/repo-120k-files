<template>
  <section class="panel-54209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54209");
const base = ref(54209);
const total = computed(() => base.value * 2);

function incrementar54209() {
  base.value++;
}
</script>

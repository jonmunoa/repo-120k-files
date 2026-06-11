<template>
  <section class="panel-54137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54137");
const base = ref(54137);
const total = computed(() => base.value * 2);

function incrementar54137() {
  base.value++;
}
</script>

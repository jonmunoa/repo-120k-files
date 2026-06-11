<template>
  <section class="panel-54533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54533");
const base = ref(54533);
const total = computed(() => base.value * 2);

function incrementar54533() {
  base.value++;
}
</script>

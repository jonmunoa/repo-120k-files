<template>
  <section class="panel-54725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54725");
const base = ref(54725);
const total = computed(() => base.value * 2);

function incrementar54725() {
  base.value++;
}
</script>

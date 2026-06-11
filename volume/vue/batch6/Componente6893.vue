<template>
  <section class="panel-6893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6893");
const base = ref(6893);
const total = computed(() => base.value * 2);

function incrementar6893() {
  base.value++;
}
</script>

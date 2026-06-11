<template>
  <section class="panel-54317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54317");
const base = ref(54317);
const total = computed(() => base.value * 2);

function incrementar54317() {
  base.value++;
}
</script>

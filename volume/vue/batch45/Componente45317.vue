<template>
  <section class="panel-45317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45317");
const base = ref(45317);
const total = computed(() => base.value * 2);

function incrementar45317() {
  base.value++;
}
</script>

<template>
  <section class="panel-30949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30949");
const base = ref(30949);
const total = computed(() => base.value * 2);

function incrementar30949() {
  base.value++;
}
</script>

<template>
  <section class="panel-54381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54381");
const base = ref(54381);
const total = computed(() => base.value * 2);

function incrementar54381() {
  base.value++;
}
</script>

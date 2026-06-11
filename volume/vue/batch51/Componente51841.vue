<template>
  <section class="panel-51841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51841");
const base = ref(51841);
const total = computed(() => base.value * 2);

function incrementar51841() {
  base.value++;
}
</script>

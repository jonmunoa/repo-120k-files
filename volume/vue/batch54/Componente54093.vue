<template>
  <section class="panel-54093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54093");
const base = ref(54093);
const total = computed(() => base.value * 2);

function incrementar54093() {
  base.value++;
}
</script>

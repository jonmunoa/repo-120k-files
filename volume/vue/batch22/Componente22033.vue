<template>
  <section class="panel-22033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22033");
const base = ref(22033);
const total = computed(() => base.value * 2);

function incrementar22033() {
  base.value++;
}
</script>

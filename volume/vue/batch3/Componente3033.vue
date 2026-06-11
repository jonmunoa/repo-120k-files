<template>
  <section class="panel-3033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3033");
const base = ref(3033);
const total = computed(() => base.value * 2);

function incrementar3033() {
  base.value++;
}
</script>

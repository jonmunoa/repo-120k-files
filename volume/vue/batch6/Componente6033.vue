<template>
  <section class="panel-6033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6033");
const base = ref(6033);
const total = computed(() => base.value * 2);

function incrementar6033() {
  base.value++;
}
</script>

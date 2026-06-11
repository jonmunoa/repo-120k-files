<template>
  <section class="panel-42033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42033");
const base = ref(42033);
const total = computed(() => base.value * 2);

function incrementar42033() {
  base.value++;
}
</script>

<template>
  <section class="panel-25837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25837");
const base = ref(25837);
const total = computed(() => base.value * 2);

function incrementar25837() {
  base.value++;
}
</script>

<template>
  <section class="panel-54837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54837");
const base = ref(54837);
const total = computed(() => base.value * 2);

function incrementar54837() {
  base.value++;
}
</script>

<template>
  <section class="panel-6837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6837");
const base = ref(6837);
const total = computed(() => base.value * 2);

function incrementar6837() {
  base.value++;
}
</script>

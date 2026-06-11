<template>
  <section class="panel-39137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39137");
const base = ref(39137);
const total = computed(() => base.value * 2);

function incrementar39137() {
  base.value++;
}
</script>

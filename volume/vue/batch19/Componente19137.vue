<template>
  <section class="panel-19137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19137");
const base = ref(19137);
const total = computed(() => base.value * 2);

function incrementar19137() {
  base.value++;
}
</script>

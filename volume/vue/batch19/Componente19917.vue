<template>
  <section class="panel-19917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19917");
const base = ref(19917);
const total = computed(() => base.value * 2);

function incrementar19917() {
  base.value++;
}
</script>

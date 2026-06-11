<template>
  <section class="panel-54221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54221");
const base = ref(54221);
const total = computed(() => base.value * 2);

function incrementar54221() {
  base.value++;
}
</script>

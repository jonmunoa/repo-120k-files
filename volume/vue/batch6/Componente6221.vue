<template>
  <section class="panel-6221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6221");
const base = ref(6221);
const total = computed(() => base.value * 2);

function incrementar6221() {
  base.value++;
}
</script>

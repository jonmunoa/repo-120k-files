<template>
  <section class="panel-29989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29989");
const base = ref(29989);
const total = computed(() => base.value * 2);

function incrementar29989() {
  base.value++;
}
</script>

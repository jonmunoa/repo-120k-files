<template>
  <section class="panel-23989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23989");
const base = ref(23989);
const total = computed(() => base.value * 2);

function incrementar23989() {
  base.value++;
}
</script>

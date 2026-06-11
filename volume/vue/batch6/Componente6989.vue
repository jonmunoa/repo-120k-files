<template>
  <section class="panel-6989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6989");
const base = ref(6989);
const total = computed(() => base.value * 2);

function incrementar6989() {
  base.value++;
}
</script>

<template>
  <section class="panel-48989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48989");
const base = ref(48989);
const total = computed(() => base.value * 2);

function incrementar48989() {
  base.value++;
}
</script>

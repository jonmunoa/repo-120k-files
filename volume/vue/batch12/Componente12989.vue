<template>
  <section class="panel-12989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12989");
const base = ref(12989);
const total = computed(() => base.value * 2);

function incrementar12989() {
  base.value++;
}
</script>

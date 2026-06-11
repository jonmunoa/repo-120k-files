<template>
  <section class="panel-16989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16989");
const base = ref(16989);
const total = computed(() => base.value * 2);

function incrementar16989() {
  base.value++;
}
</script>

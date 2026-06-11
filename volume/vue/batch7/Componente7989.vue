<template>
  <section class="panel-7989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7989");
const base = ref(7989);
const total = computed(() => base.value * 2);

function incrementar7989() {
  base.value++;
}
</script>

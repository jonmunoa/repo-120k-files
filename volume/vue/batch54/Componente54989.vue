<template>
  <section class="panel-54989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54989");
const base = ref(54989);
const total = computed(() => base.value * 2);

function incrementar54989() {
  base.value++;
}
</script>

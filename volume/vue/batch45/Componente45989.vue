<template>
  <section class="panel-45989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45989");
const base = ref(45989);
const total = computed(() => base.value * 2);

function incrementar45989() {
  base.value++;
}
</script>

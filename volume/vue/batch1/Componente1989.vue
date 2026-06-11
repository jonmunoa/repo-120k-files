<template>
  <section class="panel-1989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1989");
const base = ref(1989);
const total = computed(() => base.value * 2);

function incrementar1989() {
  base.value++;
}
</script>

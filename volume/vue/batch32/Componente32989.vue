<template>
  <section class="panel-32989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32989");
const base = ref(32989);
const total = computed(() => base.value * 2);

function incrementar32989() {
  base.value++;
}
</script>

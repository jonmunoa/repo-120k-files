<template>
  <section class="panel-56989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56989");
const base = ref(56989);
const total = computed(() => base.value * 2);

function incrementar56989() {
  base.value++;
}
</script>

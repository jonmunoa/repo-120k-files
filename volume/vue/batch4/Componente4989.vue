<template>
  <section class="panel-4989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4989");
const base = ref(4989);
const total = computed(() => base.value * 2);

function incrementar4989() {
  base.value++;
}
</script>

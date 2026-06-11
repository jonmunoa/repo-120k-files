<template>
  <section class="panel-53989">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53989");
const base = ref(53989);
const total = computed(() => base.value * 2);

function incrementar53989() {
  base.value++;
}
</script>

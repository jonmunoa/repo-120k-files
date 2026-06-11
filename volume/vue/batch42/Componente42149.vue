<template>
  <section class="panel-42149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42149");
const base = ref(42149);
const total = computed(() => base.value * 2);

function incrementar42149() {
  base.value++;
}
</script>

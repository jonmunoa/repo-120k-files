<template>
  <section class="panel-12149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12149");
const base = ref(12149);
const total = computed(() => base.value * 2);

function incrementar12149() {
  base.value++;
}
</script>

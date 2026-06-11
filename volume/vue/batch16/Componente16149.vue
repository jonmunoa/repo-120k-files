<template>
  <section class="panel-16149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16149");
const base = ref(16149);
const total = computed(() => base.value * 2);

function incrementar16149() {
  base.value++;
}
</script>

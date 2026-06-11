<template>
  <section class="panel-2025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2025");
const base = ref(2025);
const total = computed(() => base.value * 2);

function incrementar2025() {
  base.value++;
}
</script>

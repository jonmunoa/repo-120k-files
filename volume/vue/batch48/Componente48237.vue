<template>
  <section class="panel-48237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48237");
const base = ref(48237);
const total = computed(() => base.value * 2);

function incrementar48237() {
  base.value++;
}
</script>

<template>
  <section class="panel-42909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42909");
const base = ref(42909);
const total = computed(() => base.value * 2);

function incrementar42909() {
  base.value++;
}
</script>

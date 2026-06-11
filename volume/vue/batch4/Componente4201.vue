<template>
  <section class="panel-4201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4201");
const base = ref(4201);
const total = computed(() => base.value * 2);

function incrementar4201() {
  base.value++;
}
</script>

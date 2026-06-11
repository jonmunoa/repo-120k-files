<template>
  <section class="panel-44201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44201");
const base = ref(44201);
const total = computed(() => base.value * 2);

function incrementar44201() {
  base.value++;
}
</script>

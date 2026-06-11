<template>
  <section class="panel-15201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15201");
const base = ref(15201);
const total = computed(() => base.value * 2);

function incrementar15201() {
  base.value++;
}
</script>

<template>
  <section class="panel-3201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3201");
const base = ref(3201);
const total = computed(() => base.value * 2);

function incrementar3201() {
  base.value++;
}
</script>

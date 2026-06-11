<template>
  <section class="panel-52201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52201");
const base = ref(52201);
const total = computed(() => base.value * 2);

function incrementar52201() {
  base.value++;
}
</script>

<template>
  <section class="panel-201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 201");
const base = ref(201);
const total = computed(() => base.value * 2);

function incrementar201() {
  base.value++;
}
</script>

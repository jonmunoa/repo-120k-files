<template>
  <section class="panel-45201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45201");
const base = ref(45201);
const total = computed(() => base.value * 2);

function incrementar45201() {
  base.value++;
}
</script>

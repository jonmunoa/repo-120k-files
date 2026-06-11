<template>
  <section class="panel-5201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5201");
const base = ref(5201);
const total = computed(() => base.value * 2);

function incrementar5201() {
  base.value++;
}
</script>

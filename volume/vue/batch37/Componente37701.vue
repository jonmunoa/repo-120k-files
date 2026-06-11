<template>
  <section class="panel-37701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37701");
const base = ref(37701);
const total = computed(() => base.value * 2);

function incrementar37701() {
  base.value++;
}
</script>

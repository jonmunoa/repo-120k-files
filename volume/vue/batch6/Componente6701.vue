<template>
  <section class="panel-6701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6701");
const base = ref(6701);
const total = computed(() => base.value * 2);

function incrementar6701() {
  base.value++;
}
</script>

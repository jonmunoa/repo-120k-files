<template>
  <section class="panel-6949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6949");
const base = ref(6949);
const total = computed(() => base.value * 2);

function incrementar6949() {
  base.value++;
}
</script>

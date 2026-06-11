<template>
  <section class="panel-10309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10309");
const base = ref(10309);
const total = computed(() => base.value * 2);

function incrementar10309() {
  base.value++;
}
</script>

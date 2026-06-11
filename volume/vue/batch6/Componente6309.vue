<template>
  <section class="panel-6309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6309");
const base = ref(6309);
const total = computed(() => base.value * 2);

function incrementar6309() {
  base.value++;
}
</script>

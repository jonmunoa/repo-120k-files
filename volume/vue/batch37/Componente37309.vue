<template>
  <section class="panel-37309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37309");
const base = ref(37309);
const total = computed(() => base.value * 2);

function incrementar37309() {
  base.value++;
}
</script>

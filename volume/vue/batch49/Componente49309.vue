<template>
  <section class="panel-49309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49309");
const base = ref(49309);
const total = computed(() => base.value * 2);

function incrementar49309() {
  base.value++;
}
</script>

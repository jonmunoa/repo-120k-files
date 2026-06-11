<template>
  <section class="panel-8309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8309");
const base = ref(8309);
const total = computed(() => base.value * 2);

function incrementar8309() {
  base.value++;
}
</script>

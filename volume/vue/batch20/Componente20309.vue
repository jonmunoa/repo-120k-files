<template>
  <section class="panel-20309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20309");
const base = ref(20309);
const total = computed(() => base.value * 2);

function incrementar20309() {
  base.value++;
}
</script>

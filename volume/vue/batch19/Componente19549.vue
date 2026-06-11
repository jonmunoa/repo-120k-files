<template>
  <section class="panel-19549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19549");
const base = ref(19549);
const total = computed(() => base.value * 2);

function incrementar19549() {
  base.value++;
}
</script>

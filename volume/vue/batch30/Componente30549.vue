<template>
  <section class="panel-30549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30549");
const base = ref(30549);
const total = computed(() => base.value * 2);

function incrementar30549() {
  base.value++;
}
</script>

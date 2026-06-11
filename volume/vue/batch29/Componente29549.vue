<template>
  <section class="panel-29549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29549");
const base = ref(29549);
const total = computed(() => base.value * 2);

function incrementar29549() {
  base.value++;
}
</script>

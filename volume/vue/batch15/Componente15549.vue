<template>
  <section class="panel-15549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15549");
const base = ref(15549);
const total = computed(() => base.value * 2);

function incrementar15549() {
  base.value++;
}
</script>

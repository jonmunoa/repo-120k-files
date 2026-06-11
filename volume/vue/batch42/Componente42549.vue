<template>
  <section class="panel-42549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42549");
const base = ref(42549);
const total = computed(() => base.value * 2);

function incrementar42549() {
  base.value++;
}
</script>

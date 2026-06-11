<template>
  <section class="panel-16549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16549");
const base = ref(16549);
const total = computed(() => base.value * 2);

function incrementar16549() {
  base.value++;
}
</script>

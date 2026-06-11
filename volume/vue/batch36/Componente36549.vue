<template>
  <section class="panel-36549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36549");
const base = ref(36549);
const total = computed(() => base.value * 2);

function incrementar36549() {
  base.value++;
}
</script>

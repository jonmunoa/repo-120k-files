<template>
  <section class="panel-36361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36361");
const base = ref(36361);
const total = computed(() => base.value * 2);

function incrementar36361() {
  base.value++;
}
</script>

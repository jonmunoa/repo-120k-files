<template>
  <section class="panel-36505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36505");
const base = ref(36505);
const total = computed(() => base.value * 2);

function incrementar36505() {
  base.value++;
}
</script>

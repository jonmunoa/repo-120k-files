<template>
  <section class="panel-52573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52573");
const base = ref(52573);
const total = computed(() => base.value * 2);

function incrementar52573() {
  base.value++;
}
</script>

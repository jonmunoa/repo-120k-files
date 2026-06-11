<template>
  <section class="panel-6005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6005");
const base = ref(6005);
const total = computed(() => base.value * 2);

function incrementar6005() {
  base.value++;
}
</script>

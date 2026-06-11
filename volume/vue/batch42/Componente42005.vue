<template>
  <section class="panel-42005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42005");
const base = ref(42005);
const total = computed(() => base.value * 2);

function incrementar42005() {
  base.value++;
}
</script>

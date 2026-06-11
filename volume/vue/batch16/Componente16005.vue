<template>
  <section class="panel-16005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16005");
const base = ref(16005);
const total = computed(() => base.value * 2);

function incrementar16005() {
  base.value++;
}
</script>

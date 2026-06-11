<template>
  <section class="panel-30005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30005");
const base = ref(30005);
const total = computed(() => base.value * 2);

function incrementar30005() {
  base.value++;
}
</script>

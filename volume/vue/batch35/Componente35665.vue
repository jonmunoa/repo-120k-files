<template>
  <section class="panel-35665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35665");
const base = ref(35665);
const total = computed(() => base.value * 2);

function incrementar35665() {
  base.value++;
}
</script>

<template>
  <section class="panel-23461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23461");
const base = ref(23461);
const total = computed(() => base.value * 2);

function incrementar23461() {
  base.value++;
}
</script>

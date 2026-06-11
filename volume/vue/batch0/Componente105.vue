<template>
  <section class="panel-105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 105");
const base = ref(105);
const total = computed(() => base.value * 2);

function incrementar105() {
  base.value++;
}
</script>

<template>
  <section class="panel-1801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1801");
const base = ref(1801);
const total = computed(() => base.value * 2);

function incrementar1801() {
  base.value++;
}
</script>

<template>
  <section class="panel-7613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7613");
const base = ref(7613);
const total = computed(() => base.value * 2);

function incrementar7613() {
  base.value++;
}
</script>

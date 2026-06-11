<template>
  <section class="panel-11613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11613");
const base = ref(11613);
const total = computed(() => base.value * 2);

function incrementar11613() {
  base.value++;
}
</script>

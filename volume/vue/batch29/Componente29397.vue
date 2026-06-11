<template>
  <section class="panel-29397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29397");
const base = ref(29397);
const total = computed(() => base.value * 2);

function incrementar29397() {
  base.value++;
}
</script>

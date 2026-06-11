<template>
  <section class="panel-6397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6397");
const base = ref(6397);
const total = computed(() => base.value * 2);

function incrementar6397() {
  base.value++;
}
</script>

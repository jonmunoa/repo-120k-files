<template>
  <section class="panel-44221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44221");
const base = ref(44221);
const total = computed(() => base.value * 2);

function incrementar44221() {
  base.value++;
}
</script>

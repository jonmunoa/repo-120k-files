<template>
  <section class="panel-42221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42221");
const base = ref(42221);
const total = computed(() => base.value * 2);

function incrementar42221() {
  base.value++;
}
</script>

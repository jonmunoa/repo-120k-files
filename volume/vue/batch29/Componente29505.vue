<template>
  <section class="panel-29505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29505");
const base = ref(29505);
const total = computed(() => base.value * 2);

function incrementar29505() {
  base.value++;
}
</script>

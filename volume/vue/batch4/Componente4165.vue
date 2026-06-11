<template>
  <section class="panel-4165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4165");
const base = ref(4165);
const total = computed(() => base.value * 2);

function incrementar4165() {
  base.value++;
}
</script>

<template>
  <section class="panel-48505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48505");
const base = ref(48505);
const total = computed(() => base.value * 2);

function incrementar48505() {
  base.value++;
}
</script>

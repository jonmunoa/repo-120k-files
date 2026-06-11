<template>
  <section class="panel-24505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24505");
const base = ref(24505);
const total = computed(() => base.value * 2);

function incrementar24505() {
  base.value++;
}
</script>

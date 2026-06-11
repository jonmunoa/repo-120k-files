<template>
  <section class="panel-6505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6505");
const base = ref(6505);
const total = computed(() => base.value * 2);

function incrementar6505() {
  base.value++;
}
</script>

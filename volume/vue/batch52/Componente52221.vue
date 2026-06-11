<template>
  <section class="panel-52221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52221");
const base = ref(52221);
const total = computed(() => base.value * 2);

function incrementar52221() {
  base.value++;
}
</script>

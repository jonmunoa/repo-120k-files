<template>
  <section class="panel-52317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52317");
const base = ref(52317);
const total = computed(() => base.value * 2);

function incrementar52317() {
  base.value++;
}
</script>

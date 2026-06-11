<template>
  <section class="panel-52733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52733");
const base = ref(52733);
const total = computed(() => base.value * 2);

function incrementar52733() {
  base.value++;
}
</script>

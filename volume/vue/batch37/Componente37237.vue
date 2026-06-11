<template>
  <section class="panel-37237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37237");
const base = ref(37237);
const total = computed(() => base.value * 2);

function incrementar37237() {
  base.value++;
}
</script>

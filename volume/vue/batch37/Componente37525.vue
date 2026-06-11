<template>
  <section class="panel-37525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37525");
const base = ref(37525);
const total = computed(() => base.value * 2);

function incrementar37525() {
  base.value++;
}
</script>

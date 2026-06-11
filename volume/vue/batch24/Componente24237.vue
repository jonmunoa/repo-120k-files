<template>
  <section class="panel-24237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24237");
const base = ref(24237);
const total = computed(() => base.value * 2);

function incrementar24237() {
  base.value++;
}
</script>

<template>
  <section class="panel-889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 889");
const base = ref(889);
const total = computed(() => base.value * 2);

function incrementar889() {
  base.value++;
}
</script>

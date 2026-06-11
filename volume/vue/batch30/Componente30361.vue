<template>
  <section class="panel-30361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30361");
const base = ref(30361);
const total = computed(() => base.value * 2);

function incrementar30361() {
  base.value++;
}
</script>

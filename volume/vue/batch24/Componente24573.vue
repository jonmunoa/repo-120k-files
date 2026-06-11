<template>
  <section class="panel-24573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24573");
const base = ref(24573);
const total = computed(() => base.value * 2);

function incrementar24573() {
  base.value++;
}
</script>

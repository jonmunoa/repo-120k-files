<template>
  <section class="panel-23889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23889");
const base = ref(23889);
const total = computed(() => base.value * 2);

function incrementar23889() {
  base.value++;
}
</script>

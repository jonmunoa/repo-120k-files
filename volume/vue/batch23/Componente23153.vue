<template>
  <section class="panel-23153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23153");
const base = ref(23153);
const total = computed(() => base.value * 2);

function incrementar23153() {
  base.value++;
}
</script>

<template>
  <section class="panel-24949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24949");
const base = ref(24949);
const total = computed(() => base.value * 2);

function incrementar24949() {
  base.value++;
}
</script>

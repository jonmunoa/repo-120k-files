<template>
  <section class="panel-39405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39405");
const base = ref(39405);
const total = computed(() => base.value * 2);

function incrementar39405() {
  base.value++;
}
</script>

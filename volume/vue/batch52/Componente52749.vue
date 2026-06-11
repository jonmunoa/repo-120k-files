<template>
  <section class="panel-52749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52749");
const base = ref(52749);
const total = computed(() => base.value * 2);

function incrementar52749() {
  base.value++;
}
</script>

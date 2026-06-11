<template>
  <section class="panel-30749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30749");
const base = ref(30749);
const total = computed(() => base.value * 2);

function incrementar30749() {
  base.value++;
}
</script>

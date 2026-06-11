<template>
  <section class="panel-9749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9749");
const base = ref(9749);
const total = computed(() => base.value * 2);

function incrementar9749() {
  base.value++;
}
</script>

<template>
  <section class="panel-42525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42525");
const base = ref(42525);
const total = computed(() => base.value * 2);

function incrementar42525() {
  base.value++;
}
</script>

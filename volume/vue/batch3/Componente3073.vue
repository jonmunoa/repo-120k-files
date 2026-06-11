<template>
  <section class="panel-3073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3073");
const base = ref(3073);
const total = computed(() => base.value * 2);

function incrementar3073() {
  base.value++;
}
</script>

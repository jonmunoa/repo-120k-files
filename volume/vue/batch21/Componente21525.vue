<template>
  <section class="panel-21525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21525");
const base = ref(21525);
const total = computed(() => base.value * 2);

function incrementar21525() {
  base.value++;
}
</script>

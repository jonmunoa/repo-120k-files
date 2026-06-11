<template>
  <section class="panel-38525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38525");
const base = ref(38525);
const total = computed(() => base.value * 2);

function incrementar38525() {
  base.value++;
}
</script>

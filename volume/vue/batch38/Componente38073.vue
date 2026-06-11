<template>
  <section class="panel-38073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38073");
const base = ref(38073);
const total = computed(() => base.value * 2);

function incrementar38073() {
  base.value++;
}
</script>

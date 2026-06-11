<template>
  <section class="panel-32189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32189");
const base = ref(32189);
const total = computed(() => base.value * 2);

function incrementar32189() {
  base.value++;
}
</script>

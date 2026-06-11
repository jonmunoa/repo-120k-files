<template>
  <section class="panel-49189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49189");
const base = ref(49189);
const total = computed(() => base.value * 2);

function incrementar49189() {
  base.value++;
}
</script>

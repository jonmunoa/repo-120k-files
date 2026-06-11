<template>
  <section class="panel-5209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5209");
const base = ref(5209);
const total = computed(() => base.value * 2);

function incrementar5209() {
  base.value++;
}
</script>

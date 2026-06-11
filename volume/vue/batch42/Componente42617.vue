<template>
  <section class="panel-42617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42617");
const base = ref(42617);
const total = computed(() => base.value * 2);

function incrementar42617() {
  base.value++;
}
</script>

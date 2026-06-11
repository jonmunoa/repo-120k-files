<template>
  <section class="panel-16617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16617");
const base = ref(16617);
const total = computed(() => base.value * 2);

function incrementar16617() {
  base.value++;
}
</script>

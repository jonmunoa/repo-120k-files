<template>
  <section class="panel-23617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23617");
const base = ref(23617);
const total = computed(() => base.value * 2);

function incrementar23617() {
  base.value++;
}
</script>

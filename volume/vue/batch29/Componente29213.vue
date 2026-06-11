<template>
  <section class="panel-29213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29213");
const base = ref(29213);
const total = computed(() => base.value * 2);

function incrementar29213() {
  base.value++;
}
</script>

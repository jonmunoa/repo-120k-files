<template>
  <section class="panel-43617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43617");
const base = ref(43617);
const total = computed(() => base.value * 2);

function incrementar43617() {
  base.value++;
}
</script>

<template>
  <section class="panel-45617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45617");
const base = ref(45617);
const total = computed(() => base.value * 2);

function incrementar45617() {
  base.value++;
}
</script>

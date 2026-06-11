<template>
  <section class="panel-41461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41461");
const base = ref(41461);
const total = computed(() => base.value * 2);

function incrementar41461() {
  base.value++;
}
</script>

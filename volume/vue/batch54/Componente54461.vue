<template>
  <section class="panel-54461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54461");
const base = ref(54461);
const total = computed(() => base.value * 2);

function incrementar54461() {
  base.value++;
}
</script>

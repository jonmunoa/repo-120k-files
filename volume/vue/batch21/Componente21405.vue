<template>
  <section class="panel-21405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21405");
const base = ref(21405);
const total = computed(() => base.value * 2);

function incrementar21405() {
  base.value++;
}
</script>

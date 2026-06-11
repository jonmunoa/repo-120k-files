<template>
  <section class="panel-24461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24461");
const base = ref(24461);
const total = computed(() => base.value * 2);

function incrementar24461() {
  base.value++;
}
</script>

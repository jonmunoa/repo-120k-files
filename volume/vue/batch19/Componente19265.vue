<template>
  <section class="panel-19265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19265");
const base = ref(19265);
const total = computed(() => base.value * 2);

function incrementar19265() {
  base.value++;
}
</script>

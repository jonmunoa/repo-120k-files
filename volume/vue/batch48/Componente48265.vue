<template>
  <section class="panel-48265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48265");
const base = ref(48265);
const total = computed(() => base.value * 2);

function incrementar48265() {
  base.value++;
}
</script>

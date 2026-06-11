<template>
  <section class="panel-265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 265");
const base = ref(265);
const total = computed(() => base.value * 2);

function incrementar265() {
  base.value++;
}
</script>

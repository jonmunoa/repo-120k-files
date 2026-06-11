<template>
  <section class="panel-47265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47265");
const base = ref(47265);
const total = computed(() => base.value * 2);

function incrementar47265() {
  base.value++;
}
</script>

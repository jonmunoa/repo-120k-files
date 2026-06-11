<template>
  <section class="panel-36265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36265");
const base = ref(36265);
const total = computed(() => base.value * 2);

function incrementar36265() {
  base.value++;
}
</script>

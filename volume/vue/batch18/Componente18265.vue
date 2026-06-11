<template>
  <section class="panel-18265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18265");
const base = ref(18265);
const total = computed(() => base.value * 2);

function incrementar18265() {
  base.value++;
}
</script>

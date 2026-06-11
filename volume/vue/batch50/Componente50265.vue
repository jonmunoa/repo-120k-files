<template>
  <section class="panel-50265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50265");
const base = ref(50265);
const total = computed(() => base.value * 2);

function incrementar50265() {
  base.value++;
}
</script>

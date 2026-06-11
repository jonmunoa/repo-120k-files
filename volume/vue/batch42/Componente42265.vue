<template>
  <section class="panel-42265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42265");
const base = ref(42265);
const total = computed(() => base.value * 2);

function incrementar42265() {
  base.value++;
}
</script>

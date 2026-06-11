<template>
  <section class="panel-21265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21265");
const base = ref(21265);
const total = computed(() => base.value * 2);

function incrementar21265() {
  base.value++;
}
</script>

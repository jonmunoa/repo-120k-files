<template>
  <section class="panel-41265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41265");
const base = ref(41265);
const total = computed(() => base.value * 2);

function incrementar41265() {
  base.value++;
}
</script>

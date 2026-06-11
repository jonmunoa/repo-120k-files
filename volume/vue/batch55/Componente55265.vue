<template>
  <section class="panel-55265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55265");
const base = ref(55265);
const total = computed(() => base.value * 2);

function incrementar55265() {
  base.value++;
}
</script>

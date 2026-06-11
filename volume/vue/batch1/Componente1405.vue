<template>
  <section class="panel-1405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1405");
const base = ref(1405);
const total = computed(() => base.value * 2);

function incrementar1405() {
  base.value++;
}
</script>

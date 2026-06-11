<template>
  <section class="panel-45405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45405");
const base = ref(45405);
const total = computed(() => base.value * 2);

function incrementar45405() {
  base.value++;
}
</script>

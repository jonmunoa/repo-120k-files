<template>
  <section class="panel-44269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44269");
const base = ref(44269);
const total = computed(() => base.value * 2);

function incrementar44269() {
  base.value++;
}
</script>

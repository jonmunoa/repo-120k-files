<template>
  <section class="panel-1189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1189");
const base = ref(1189);
const total = computed(() => base.value * 2);

function incrementar1189() {
  base.value++;
}
</script>

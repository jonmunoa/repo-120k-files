<template>
  <section class="panel-48525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48525");
const base = ref(48525);
const total = computed(() => base.value * 2);

function incrementar48525() {
  base.value++;
}
</script>

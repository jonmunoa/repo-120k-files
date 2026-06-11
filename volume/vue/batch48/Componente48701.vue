<template>
  <section class="panel-48701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48701");
const base = ref(48701);
const total = computed(() => base.value * 2);

function incrementar48701() {
  base.value++;
}
</script>

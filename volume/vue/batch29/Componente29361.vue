<template>
  <section class="panel-29361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29361");
const base = ref(29361);
const total = computed(() => base.value * 2);

function incrementar29361() {
  base.value++;
}
</script>

<template>
  <section class="panel-48813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48813");
const base = ref(48813);
const total = computed(() => base.value * 2);

function incrementar48813() {
  base.value++;
}
</script>

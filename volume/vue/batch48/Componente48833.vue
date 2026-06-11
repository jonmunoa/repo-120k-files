<template>
  <section class="panel-48833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48833");
const base = ref(48833);
const total = computed(() => base.value * 2);

function incrementar48833() {
  base.value++;
}
</script>

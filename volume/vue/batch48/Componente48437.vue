<template>
  <section class="panel-48437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48437");
const base = ref(48437);
const total = computed(() => base.value * 2);

function incrementar48437() {
  base.value++;
}
</script>

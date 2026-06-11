<template>
  <section class="panel-48137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48137");
const base = ref(48137);
const total = computed(() => base.value * 2);

function incrementar48137() {
  base.value++;
}
</script>

<template>
  <section class="panel-19837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19837");
const base = ref(19837);
const total = computed(() => base.value * 2);

function incrementar19837() {
  base.value++;
}
</script>

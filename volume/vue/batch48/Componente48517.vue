<template>
  <section class="panel-48517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48517");
const base = ref(48517);
const total = computed(() => base.value * 2);

function incrementar48517() {
  base.value++;
}
</script>

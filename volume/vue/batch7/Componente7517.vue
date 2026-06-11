<template>
  <section class="panel-7517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7517");
const base = ref(7517);
const total = computed(() => base.value * 2);

function incrementar7517() {
  base.value++;
}
</script>

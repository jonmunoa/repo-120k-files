<template>
  <section class="panel-54901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54901");
const base = ref(54901);
const total = computed(() => base.value * 2);

function incrementar54901() {
  base.value++;
}
</script>

<template>
  <section class="panel-9517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9517");
const base = ref(9517);
const total = computed(() => base.value * 2);

function incrementar9517() {
  base.value++;
}
</script>

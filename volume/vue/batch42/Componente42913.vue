<template>
  <section class="panel-42913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42913");
const base = ref(42913);
const total = computed(() => base.value * 2);

function incrementar42913() {
  base.value++;
}
</script>

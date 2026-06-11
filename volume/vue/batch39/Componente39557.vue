<template>
  <section class="panel-39557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39557");
const base = ref(39557);
const total = computed(() => base.value * 2);

function incrementar39557() {
  base.value++;
}
</script>

<template>
  <section class="panel-6557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6557");
const base = ref(6557);
const total = computed(() => base.value * 2);

function incrementar6557() {
  base.value++;
}
</script>

<template>
  <section class="panel-1573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1573");
const base = ref(1573);
const total = computed(() => base.value * 2);

function incrementar1573() {
  base.value++;
}
</script>

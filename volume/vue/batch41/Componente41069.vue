<template>
  <section class="panel-41069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41069");
const base = ref(41069);
const total = computed(() => base.value * 2);

function incrementar41069() {
  base.value++;
}
</script>

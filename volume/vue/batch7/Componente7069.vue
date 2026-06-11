<template>
  <section class="panel-7069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7069");
const base = ref(7069);
const total = computed(() => base.value * 2);

function incrementar7069() {
  base.value++;
}
</script>

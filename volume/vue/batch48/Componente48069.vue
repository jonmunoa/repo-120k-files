<template>
  <section class="panel-48069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48069");
const base = ref(48069);
const total = computed(() => base.value * 2);

function incrementar48069() {
  base.value++;
}
</script>

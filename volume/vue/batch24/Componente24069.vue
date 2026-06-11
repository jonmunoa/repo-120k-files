<template>
  <section class="panel-24069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24069");
const base = ref(24069);
const total = computed(() => base.value * 2);

function incrementar24069() {
  base.value++;
}
</script>

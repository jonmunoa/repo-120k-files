<template>
  <section class="panel-19033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19033");
const base = ref(19033);
const total = computed(() => base.value * 2);

function incrementar19033() {
  base.value++;
}
</script>

<template>
  <section class="panel-28033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28033");
const base = ref(28033);
const total = computed(() => base.value * 2);

function incrementar28033() {
  base.value++;
}
</script>

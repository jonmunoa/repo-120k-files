<template>
  <section class="panel-9909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9909");
const base = ref(9909);
const total = computed(() => base.value * 2);

function incrementar9909() {
  base.value++;
}
</script>

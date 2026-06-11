<template>
  <section class="panel-309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 309");
const base = ref(309);
const total = computed(() => base.value * 2);

function incrementar309() {
  base.value++;
}
</script>

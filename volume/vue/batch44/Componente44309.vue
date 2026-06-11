<template>
  <section class="panel-44309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44309");
const base = ref(44309);
const total = computed(() => base.value * 2);

function incrementar44309() {
  base.value++;
}
</script>

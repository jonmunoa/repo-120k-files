<template>
  <section class="panel-19949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19949");
const base = ref(19949);
const total = computed(() => base.value * 2);

function incrementar19949() {
  base.value++;
}
</script>

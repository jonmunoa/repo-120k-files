<template>
  <section class="panel-27129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27129");
const base = ref(27129);
const total = computed(() => base.value * 2);

function incrementar27129() {
  base.value++;
}
</script>

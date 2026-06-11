<template>
  <section class="panel-49889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49889");
const base = ref(49889);
const total = computed(() => base.value * 2);

function incrementar49889() {
  base.value++;
}
</script>

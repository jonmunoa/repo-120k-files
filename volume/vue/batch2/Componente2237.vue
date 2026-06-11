<template>
  <section class="panel-2237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2237");
const base = ref(2237);
const total = computed(() => base.value * 2);

function incrementar2237() {
  base.value++;
}
</script>

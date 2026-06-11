<template>
  <section class="panel-34165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34165");
const base = ref(34165);
const total = computed(() => base.value * 2);

function incrementar34165() {
  base.value++;
}
</script>

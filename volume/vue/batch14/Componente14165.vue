<template>
  <section class="panel-14165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14165");
const base = ref(14165);
const total = computed(() => base.value * 2);

function incrementar14165() {
  base.value++;
}
</script>

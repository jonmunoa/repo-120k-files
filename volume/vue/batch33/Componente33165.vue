<template>
  <section class="panel-33165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33165");
const base = ref(33165);
const total = computed(() => base.value * 2);

function incrementar33165() {
  base.value++;
}
</script>

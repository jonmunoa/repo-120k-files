<template>
  <section class="panel-47165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47165");
const base = ref(47165);
const total = computed(() => base.value * 2);

function incrementar47165() {
  base.value++;
}
</script>

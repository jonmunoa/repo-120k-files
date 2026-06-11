<template>
  <section class="panel-41165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41165");
const base = ref(41165);
const total = computed(() => base.value * 2);

function incrementar41165() {
  base.value++;
}
</script>

<template>
  <section class="panel-40257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40257");
const base = ref(40257);
const total = computed(() => base.value * 2);

function incrementar40257() {
  base.value++;
}
</script>

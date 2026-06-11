<template>
  <section class="panel-17129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17129");
const base = ref(17129);
const total = computed(() => base.value * 2);

function incrementar17129() {
  base.value++;
}
</script>

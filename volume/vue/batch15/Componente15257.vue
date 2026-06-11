<template>
  <section class="panel-15257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15257");
const base = ref(15257);
const total = computed(() => base.value * 2);

function incrementar15257() {
  base.value++;
}
</script>

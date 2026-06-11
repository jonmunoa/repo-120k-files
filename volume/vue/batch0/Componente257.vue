<template>
  <section class="panel-257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 257");
const base = ref(257);
const total = computed(() => base.value * 2);

function incrementar257() {
  base.value++;
}
</script>

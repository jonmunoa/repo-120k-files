<template>
  <section class="panel-16257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16257");
const base = ref(16257);
const total = computed(() => base.value * 2);

function incrementar16257() {
  base.value++;
}
</script>

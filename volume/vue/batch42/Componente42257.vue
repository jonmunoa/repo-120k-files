<template>
  <section class="panel-42257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42257");
const base = ref(42257);
const total = computed(() => base.value * 2);

function incrementar42257() {
  base.value++;
}
</script>

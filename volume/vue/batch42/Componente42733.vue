<template>
  <section class="panel-42733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42733");
const base = ref(42733);
const total = computed(() => base.value * 2);

function incrementar42733() {
  base.value++;
}
</script>

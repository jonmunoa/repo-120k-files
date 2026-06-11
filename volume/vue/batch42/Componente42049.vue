<template>
  <section class="panel-42049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42049");
const base = ref(42049);
const total = computed(() => base.value * 2);

function incrementar42049() {
  base.value++;
}
</script>

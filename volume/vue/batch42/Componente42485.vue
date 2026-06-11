<template>
  <section class="panel-42485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42485");
const base = ref(42485);
const total = computed(() => base.value * 2);

function incrementar42485() {
  base.value++;
}
</script>

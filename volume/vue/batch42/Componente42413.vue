<template>
  <section class="panel-42413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42413");
const base = ref(42413);
const total = computed(() => base.value * 2);

function incrementar42413() {
  base.value++;
}
</script>

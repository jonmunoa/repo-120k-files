<template>
  <section class="panel-42085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42085");
const base = ref(42085);
const total = computed(() => base.value * 2);

function incrementar42085() {
  base.value++;
}
</script>

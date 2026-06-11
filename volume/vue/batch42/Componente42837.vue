<template>
  <section class="panel-42837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42837");
const base = ref(42837);
const total = computed(() => base.value * 2);

function incrementar42837() {
  base.value++;
}
</script>

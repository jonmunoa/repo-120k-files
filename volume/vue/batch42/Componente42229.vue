<template>
  <section class="panel-42229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42229");
const base = ref(42229);
const total = computed(() => base.value * 2);

function incrementar42229() {
  base.value++;
}
</script>

<template>
  <section class="panel-42701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42701");
const base = ref(42701);
const total = computed(() => base.value * 2);

function incrementar42701() {
  base.value++;
}
</script>

<template>
  <section class="panel-42065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42065");
const base = ref(42065);
const total = computed(() => base.value * 2);

function incrementar42065() {
  base.value++;
}
</script>

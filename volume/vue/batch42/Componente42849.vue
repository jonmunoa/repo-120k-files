<template>
  <section class="panel-42849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42849");
const base = ref(42849);
const total = computed(() => base.value * 2);

function incrementar42849() {
  base.value++;
}
</script>

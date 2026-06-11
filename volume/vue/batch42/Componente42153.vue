<template>
  <section class="panel-42153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42153");
const base = ref(42153);
const total = computed(() => base.value * 2);

function incrementar42153() {
  base.value++;
}
</script>

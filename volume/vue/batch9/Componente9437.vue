<template>
  <section class="panel-9437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9437");
const base = ref(9437);
const total = computed(() => base.value * 2);

function incrementar9437() {
  base.value++;
}
</script>

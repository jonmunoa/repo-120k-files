<template>
  <section class="panel-41437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41437");
const base = ref(41437);
const total = computed(() => base.value * 2);

function incrementar41437() {
  base.value++;
}
</script>

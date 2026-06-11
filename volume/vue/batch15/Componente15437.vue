<template>
  <section class="panel-15437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15437");
const base = ref(15437);
const total = computed(() => base.value * 2);

function incrementar15437() {
  base.value++;
}
</script>

<template>
  <section class="panel-12693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12693");
const base = ref(12693);
const total = computed(() => base.value * 2);

function incrementar12693() {
  base.value++;
}
</script>

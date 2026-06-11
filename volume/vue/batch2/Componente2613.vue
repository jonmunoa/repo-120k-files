<template>
  <section class="panel-2613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2613");
const base = ref(2613);
const total = computed(() => base.value * 2);

function incrementar2613() {
  base.value++;
}
</script>

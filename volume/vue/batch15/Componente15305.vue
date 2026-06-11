<template>
  <section class="panel-15305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15305");
const base = ref(15305);
const total = computed(() => base.value * 2);

function incrementar15305() {
  base.value++;
}
</script>

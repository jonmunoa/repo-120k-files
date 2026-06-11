<template>
  <section class="panel-44305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44305");
const base = ref(44305);
const total = computed(() => base.value * 2);

function incrementar44305() {
  base.value++;
}
</script>

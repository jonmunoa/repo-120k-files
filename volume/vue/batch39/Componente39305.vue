<template>
  <section class="panel-39305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39305");
const base = ref(39305);
const total = computed(() => base.value * 2);

function incrementar39305() {
  base.value++;
}
</script>

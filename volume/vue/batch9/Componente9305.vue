<template>
  <section class="panel-9305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9305");
const base = ref(9305);
const total = computed(() => base.value * 2);

function incrementar9305() {
  base.value++;
}
</script>

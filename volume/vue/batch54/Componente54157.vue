<template>
  <section class="panel-54157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54157");
const base = ref(54157);
const total = computed(() => base.value * 2);

function incrementar54157() {
  base.value++;
}
</script>

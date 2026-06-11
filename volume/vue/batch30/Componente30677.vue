<template>
  <section class="panel-30677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30677");
const base = ref(30677);
const total = computed(() => base.value * 2);

function incrementar30677() {
  base.value++;
}
</script>

<template>
  <section class="panel-29781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29781");
const base = ref(29781);
const total = computed(() => base.value * 2);

function incrementar29781() {
  base.value++;
}
</script>

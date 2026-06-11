<template>
  <section class="panel-37305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37305");
const base = ref(37305);
const total = computed(() => base.value * 2);

function incrementar37305() {
  base.value++;
}
</script>

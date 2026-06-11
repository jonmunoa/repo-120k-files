<template>
  <section class="panel-19305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19305");
const base = ref(19305);
const total = computed(() => base.value * 2);

function incrementar19305() {
  base.value++;
}
</script>

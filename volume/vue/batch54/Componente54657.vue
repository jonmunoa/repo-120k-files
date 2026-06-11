<template>
  <section class="panel-54657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54657");
const base = ref(54657);
const total = computed(() => base.value * 2);

function incrementar54657() {
  base.value++;
}
</script>

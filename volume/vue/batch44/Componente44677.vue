<template>
  <section class="panel-44677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44677");
const base = ref(44677);
const total = computed(() => base.value * 2);

function incrementar44677() {
  base.value++;
}
</script>

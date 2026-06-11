<template>
  <section class="panel-44529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44529");
const base = ref(44529);
const total = computed(() => base.value * 2);

function incrementar44529() {
  base.value++;
}
</script>

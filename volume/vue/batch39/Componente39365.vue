<template>
  <section class="panel-39365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39365");
const base = ref(39365);
const total = computed(() => base.value * 2);

function incrementar39365() {
  base.value++;
}
</script>

<template>
  <section class="panel-39805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39805");
const base = ref(39805);
const total = computed(() => base.value * 2);

function incrementar39805() {
  base.value++;
}
</script>

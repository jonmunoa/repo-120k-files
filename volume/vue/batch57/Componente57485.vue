<template>
  <section class="panel-57485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57485");
const base = ref(57485);
const total = computed(() => base.value * 2);

function incrementar57485() {
  base.value++;
}
</script>

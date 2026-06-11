<template>
  <section class="panel-3485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3485");
const base = ref(3485);
const total = computed(() => base.value * 2);

function incrementar3485() {
  base.value++;
}
</script>

<template>
  <section class="panel-29049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29049");
const base = ref(29049);
const total = computed(() => base.value * 2);

function incrementar29049() {
  base.value++;
}
</script>

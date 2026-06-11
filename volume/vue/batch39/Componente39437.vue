<template>
  <section class="panel-39437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39437");
const base = ref(39437);
const total = computed(() => base.value * 2);

function incrementar39437() {
  base.value++;
}
</script>

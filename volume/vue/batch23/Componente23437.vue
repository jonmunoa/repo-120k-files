<template>
  <section class="panel-23437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23437");
const base = ref(23437);
const total = computed(() => base.value * 2);

function incrementar23437() {
  base.value++;
}
</script>

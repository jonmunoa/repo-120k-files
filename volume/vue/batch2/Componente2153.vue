<template>
  <section class="panel-2153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2153");
const base = ref(2153);
const total = computed(() => base.value * 2);

function incrementar2153() {
  base.value++;
}
</script>

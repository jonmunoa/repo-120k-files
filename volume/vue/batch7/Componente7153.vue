<template>
  <section class="panel-7153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7153");
const base = ref(7153);
const total = computed(() => base.value * 2);

function incrementar7153() {
  base.value++;
}
</script>

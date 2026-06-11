<template>
  <section class="panel-22733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22733");
const base = ref(22733);
const total = computed(() => base.value * 2);

function incrementar22733() {
  base.value++;
}
</script>

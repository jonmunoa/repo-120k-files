<template>
  <section class="panel-15733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15733");
const base = ref(15733);
const total = computed(() => base.value * 2);

function incrementar15733() {
  base.value++;
}
</script>

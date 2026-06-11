<template>
  <section class="panel-23993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23993");
const base = ref(23993);
const total = computed(() => base.value * 2);

function incrementar23993() {
  base.value++;
}
</script>

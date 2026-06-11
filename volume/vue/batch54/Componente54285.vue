<template>
  <section class="panel-54285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54285");
const base = ref(54285);
const total = computed(() => base.value * 2);

function incrementar54285() {
  base.value++;
}
</script>

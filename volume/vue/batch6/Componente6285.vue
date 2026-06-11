<template>
  <section class="panel-6285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6285");
const base = ref(6285);
const total = computed(() => base.value * 2);

function incrementar6285() {
  base.value++;
}
</script>

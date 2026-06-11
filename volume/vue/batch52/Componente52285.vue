<template>
  <section class="panel-52285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52285");
const base = ref(52285);
const total = computed(() => base.value * 2);

function incrementar52285() {
  base.value++;
}
</script>

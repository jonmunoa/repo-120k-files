<template>
  <section class="panel-41285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41285");
const base = ref(41285);
const total = computed(() => base.value * 2);

function incrementar41285() {
  base.value++;
}
</script>

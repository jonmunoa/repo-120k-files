<template>
  <section class="panel-49285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49285");
const base = ref(49285);
const total = computed(() => base.value * 2);

function incrementar49285() {
  base.value++;
}
</script>

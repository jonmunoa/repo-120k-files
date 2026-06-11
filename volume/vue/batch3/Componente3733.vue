<template>
  <section class="panel-3733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3733");
const base = ref(3733);
const total = computed(() => base.value * 2);

function incrementar3733() {
  base.value++;
}
</script>

<template>
  <section class="panel-1733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1733");
const base = ref(1733);
const total = computed(() => base.value * 2);

function incrementar1733() {
  base.value++;
}
</script>

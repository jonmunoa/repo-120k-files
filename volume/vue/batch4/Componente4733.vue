<template>
  <section class="panel-4733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4733");
const base = ref(4733);
const total = computed(() => base.value * 2);

function incrementar4733() {
  base.value++;
}
</script>

<template>
  <section class="panel-32733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32733");
const base = ref(32733);
const total = computed(() => base.value * 2);

function incrementar32733() {
  base.value++;
}
</script>

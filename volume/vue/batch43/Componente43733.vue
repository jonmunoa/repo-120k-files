<template>
  <section class="panel-43733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43733");
const base = ref(43733);
const total = computed(() => base.value * 2);

function incrementar43733() {
  base.value++;
}
</script>

<template>
  <section class="panel-21733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21733");
const base = ref(21733);
const total = computed(() => base.value * 2);

function incrementar21733() {
  base.value++;
}
</script>

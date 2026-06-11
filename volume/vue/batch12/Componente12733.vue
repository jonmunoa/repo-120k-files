<template>
  <section class="panel-12733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12733");
const base = ref(12733);
const total = computed(() => base.value * 2);

function incrementar12733() {
  base.value++;
}
</script>

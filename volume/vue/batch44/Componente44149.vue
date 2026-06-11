<template>
  <section class="panel-44149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44149");
const base = ref(44149);
const total = computed(() => base.value * 2);

function incrementar44149() {
  base.value++;
}
</script>

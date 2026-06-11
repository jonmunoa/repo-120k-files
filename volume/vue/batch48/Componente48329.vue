<template>
  <section class="panel-48329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48329");
const base = ref(48329);
const total = computed(() => base.value * 2);

function incrementar48329() {
  base.value++;
}
</script>

<template>
  <section class="panel-45049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45049");
const base = ref(45049);
const total = computed(() => base.value * 2);

function incrementar45049() {
  base.value++;
}
</script>

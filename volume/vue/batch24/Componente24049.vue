<template>
  <section class="panel-24049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24049");
const base = ref(24049);
const total = computed(() => base.value * 2);

function incrementar24049() {
  base.value++;
}
</script>

<template>
  <section class="panel-44049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44049");
const base = ref(44049);
const total = computed(() => base.value * 2);

function incrementar44049() {
  base.value++;
}
</script>

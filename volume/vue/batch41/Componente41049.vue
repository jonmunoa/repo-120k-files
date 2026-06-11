<template>
  <section class="panel-41049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41049");
const base = ref(41049);
const total = computed(() => base.value * 2);

function incrementar41049() {
  base.value++;
}
</script>

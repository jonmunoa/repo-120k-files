<template>
  <section class="panel-41301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41301");
const base = ref(41301);
const total = computed(() => base.value * 2);

function incrementar41301() {
  base.value++;
}
</script>

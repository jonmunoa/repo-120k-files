<template>
  <section class="panel-22437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22437");
const base = ref(22437);
const total = computed(() => base.value * 2);

function incrementar22437() {
  base.value++;
}
</script>

<template>
  <section class="panel-43053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43053");
const base = ref(43053);
const total = computed(() => base.value * 2);

function incrementar43053() {
  base.value++;
}
</script>

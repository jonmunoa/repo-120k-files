<template>
  <section class="panel-32725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32725");
const base = ref(32725);
const total = computed(() => base.value * 2);

function incrementar32725() {
  base.value++;
}
</script>

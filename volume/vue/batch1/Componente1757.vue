<template>
  <section class="panel-1757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1757");
const base = ref(1757);
const total = computed(() => base.value * 2);

function incrementar1757() {
  base.value++;
}
</script>

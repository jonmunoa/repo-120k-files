<template>
  <section class="panel-6757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6757");
const base = ref(6757);
const total = computed(() => base.value * 2);

function incrementar6757() {
  base.value++;
}
</script>

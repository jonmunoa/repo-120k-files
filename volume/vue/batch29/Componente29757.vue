<template>
  <section class="panel-29757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29757");
const base = ref(29757);
const total = computed(() => base.value * 2);

function incrementar29757() {
  base.value++;
}
</script>

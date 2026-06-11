<template>
  <section class="panel-43849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43849");
const base = ref(43849);
const total = computed(() => base.value * 2);

function incrementar43849() {
  base.value++;
}
</script>

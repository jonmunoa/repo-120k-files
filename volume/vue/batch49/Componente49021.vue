<template>
  <section class="panel-49021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49021");
const base = ref(49021);
const total = computed(() => base.value * 2);

function incrementar49021() {
  base.value++;
}
</script>

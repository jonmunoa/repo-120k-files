<template>
  <section class="panel-14753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14753");
const base = ref(14753);
const total = computed(() => base.value * 2);

function incrementar14753() {
  base.value++;
}
</script>

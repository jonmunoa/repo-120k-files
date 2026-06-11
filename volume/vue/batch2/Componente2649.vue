<template>
  <section class="panel-2649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2649");
const base = ref(2649);
const total = computed(() => base.value * 2);

function incrementar2649() {
  base.value++;
}
</script>

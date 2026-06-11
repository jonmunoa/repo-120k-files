<template>
  <section class="panel-14613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14613");
const base = ref(14613);
const total = computed(() => base.value * 2);

function incrementar14613() {
  base.value++;
}
</script>

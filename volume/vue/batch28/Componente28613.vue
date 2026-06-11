<template>
  <section class="panel-28613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28613");
const base = ref(28613);
const total = computed(() => base.value * 2);

function incrementar28613() {
  base.value++;
}
</script>

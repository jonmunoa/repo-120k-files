<template>
  <section class="panel-28549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28549");
const base = ref(28549);
const total = computed(() => base.value * 2);

function incrementar28549() {
  base.value++;
}
</script>

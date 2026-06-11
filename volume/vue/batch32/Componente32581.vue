<template>
  <section class="panel-32581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32581");
const base = ref(32581);
const total = computed(() => base.value * 2);

function incrementar32581() {
  base.value++;
}
</script>

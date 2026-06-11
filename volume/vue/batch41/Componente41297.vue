<template>
  <section class="panel-41297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41297");
const base = ref(41297);
const total = computed(() => base.value * 2);

function incrementar41297() {
  base.value++;
}
</script>

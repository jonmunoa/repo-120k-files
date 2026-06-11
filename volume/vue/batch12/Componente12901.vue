<template>
  <section class="panel-12901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12901");
const base = ref(12901);
const total = computed(() => base.value * 2);

function incrementar12901() {
  base.value++;
}
</script>

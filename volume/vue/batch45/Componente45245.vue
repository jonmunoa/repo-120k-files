<template>
  <section class="panel-45245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45245");
const base = ref(45245);
const total = computed(() => base.value * 2);

function incrementar45245() {
  base.value++;
}
</script>

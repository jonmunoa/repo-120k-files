<template>
  <section class="panel-36149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36149");
const base = ref(36149);
const total = computed(() => base.value * 2);

function incrementar36149() {
  base.value++;
}
</script>

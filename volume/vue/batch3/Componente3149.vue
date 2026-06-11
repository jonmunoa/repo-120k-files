<template>
  <section class="panel-3149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3149");
const base = ref(3149);
const total = computed(() => base.value * 2);

function incrementar3149() {
  base.value++;
}
</script>

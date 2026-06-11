<template>
  <section class="panel-15417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15417");
const base = ref(15417);
const total = computed(() => base.value * 2);

function incrementar15417() {
  base.value++;
}
</script>

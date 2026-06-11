<template>
  <section class="panel-42885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42885");
const base = ref(42885);
const total = computed(() => base.value * 2);

function incrementar42885() {
  base.value++;
}
</script>

<template>
  <section class="panel-48885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48885");
const base = ref(48885);
const total = computed(() => base.value * 2);

function incrementar48885() {
  base.value++;
}
</script>

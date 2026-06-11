<template>
  <section class="panel-56885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56885");
const base = ref(56885);
const total = computed(() => base.value * 2);

function incrementar56885() {
  base.value++;
}
</script>

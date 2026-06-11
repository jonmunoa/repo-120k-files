<template>
  <section class="panel-56457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56457");
const base = ref(56457);
const total = computed(() => base.value * 2);

function incrementar56457() {
  base.value++;
}
</script>

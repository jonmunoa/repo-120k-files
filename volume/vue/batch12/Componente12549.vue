<template>
  <section class="panel-12549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12549");
const base = ref(12549);
const total = computed(() => base.value * 2);

function incrementar12549() {
  base.value++;
}
</script>

<template>
  <section class="panel-16841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16841");
const base = ref(16841);
const total = computed(() => base.value * 2);

function incrementar16841() {
  base.value++;
}
</script>

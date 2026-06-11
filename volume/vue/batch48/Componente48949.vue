<template>
  <section class="panel-48949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48949");
const base = ref(48949);
const total = computed(() => base.value * 2);

function incrementar48949() {
  base.value++;
}
</script>

<template>
  <section class="panel-48033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48033");
const base = ref(48033);
const total = computed(() => base.value * 2);

function incrementar48033() {
  base.value++;
}
</script>

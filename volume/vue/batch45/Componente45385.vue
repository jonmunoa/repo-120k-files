<template>
  <section class="panel-45385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45385");
const base = ref(45385);
const total = computed(() => base.value * 2);

function incrementar45385() {
  base.value++;
}
</script>

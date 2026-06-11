<template>
  <section class="panel-15285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15285");
const base = ref(15285);
const total = computed(() => base.value * 2);

function incrementar15285() {
  base.value++;
}
</script>

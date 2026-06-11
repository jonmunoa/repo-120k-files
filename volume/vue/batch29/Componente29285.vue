<template>
  <section class="panel-29285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29285");
const base = ref(29285);
const total = computed(() => base.value * 2);

function incrementar29285() {
  base.value++;
}
</script>

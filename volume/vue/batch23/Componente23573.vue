<template>
  <section class="panel-23573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23573");
const base = ref(23573);
const total = computed(() => base.value * 2);

function incrementar23573() {
  base.value++;
}
</script>

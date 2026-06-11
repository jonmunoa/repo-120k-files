<template>
  <section class="panel-54413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54413");
const base = ref(54413);
const total = computed(() => base.value * 2);

function incrementar54413() {
  base.value++;
}
</script>

<template>
  <section class="panel-53413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53413");
const base = ref(53413);
const total = computed(() => base.value * 2);

function incrementar53413() {
  base.value++;
}
</script>

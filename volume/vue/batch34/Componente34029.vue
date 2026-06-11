<template>
  <section class="panel-34029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34029");
const base = ref(34029);
const total = computed(() => base.value * 2);

function incrementar34029() {
  base.value++;
}
</script>

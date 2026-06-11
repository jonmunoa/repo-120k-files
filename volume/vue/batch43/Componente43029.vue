<template>
  <section class="panel-43029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43029");
const base = ref(43029);
const total = computed(() => base.value * 2);

function incrementar43029() {
  base.value++;
}
</script>

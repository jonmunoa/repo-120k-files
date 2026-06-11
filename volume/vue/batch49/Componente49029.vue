<template>
  <section class="panel-49029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49029");
const base = ref(49029);
const total = computed(() => base.value * 2);

function incrementar49029() {
  base.value++;
}
</script>

<template>
  <section class="panel-36029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36029");
const base = ref(36029);
const total = computed(() => base.value * 2);

function incrementar36029() {
  base.value++;
}
</script>

<template>
  <section class="panel-51029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51029");
const base = ref(51029);
const total = computed(() => base.value * 2);

function incrementar51029() {
  base.value++;
}
</script>

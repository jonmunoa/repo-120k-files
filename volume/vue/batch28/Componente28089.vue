<template>
  <section class="panel-28089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28089");
const base = ref(28089);
const total = computed(() => base.value * 2);

function incrementar28089() {
  base.value++;
}
</script>

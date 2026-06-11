<template>
  <section class="panel-9257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9257");
const base = ref(9257);
const total = computed(() => base.value * 2);

function incrementar9257() {
  base.value++;
}
</script>

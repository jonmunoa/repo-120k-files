<template>
  <section class="panel-8545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8545");
const base = ref(8545);
const total = computed(() => base.value * 2);

function incrementar8545() {
  base.value++;
}
</script>

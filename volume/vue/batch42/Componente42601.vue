<template>
  <section class="panel-42601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42601");
const base = ref(42601);
const total = computed(() => base.value * 2);

function incrementar42601() {
  base.value++;
}
</script>

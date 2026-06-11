<template>
  <section class="panel-10029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10029");
const base = ref(10029);
const total = computed(() => base.value * 2);

function incrementar10029() {
  base.value++;
}
</script>

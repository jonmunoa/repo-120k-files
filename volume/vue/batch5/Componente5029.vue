<template>
  <section class="panel-5029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5029");
const base = ref(5029);
const total = computed(() => base.value * 2);

function incrementar5029() {
  base.value++;
}
</script>

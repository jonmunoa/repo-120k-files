<template>
  <section class="panel-45029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45029");
const base = ref(45029);
const total = computed(() => base.value * 2);

function incrementar45029() {
  base.value++;
}
</script>

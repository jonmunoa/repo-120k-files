<template>
  <section class="panel-12029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12029");
const base = ref(12029);
const total = computed(() => base.value * 2);

function incrementar12029() {
  base.value++;
}
</script>

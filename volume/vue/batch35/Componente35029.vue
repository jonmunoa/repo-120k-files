<template>
  <section class="panel-35029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35029");
const base = ref(35029);
const total = computed(() => base.value * 2);

function incrementar35029() {
  base.value++;
}
</script>

<template>
  <section class="panel-55029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55029");
const base = ref(55029);
const total = computed(() => base.value * 2);

function incrementar55029() {
  base.value++;
}
</script>

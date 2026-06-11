<template>
  <section class="panel-2029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2029");
const base = ref(2029);
const total = computed(() => base.value * 2);

function incrementar2029() {
  base.value++;
}
</script>

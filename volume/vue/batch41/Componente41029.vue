<template>
  <section class="panel-41029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41029");
const base = ref(41029);
const total = computed(() => base.value * 2);

function incrementar41029() {
  base.value++;
}
</script>

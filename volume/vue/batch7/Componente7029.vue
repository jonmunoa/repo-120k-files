<template>
  <section class="panel-7029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7029");
const base = ref(7029);
const total = computed(() => base.value * 2);

function incrementar7029() {
  base.value++;
}
</script>

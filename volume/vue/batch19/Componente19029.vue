<template>
  <section class="panel-19029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19029");
const base = ref(19029);
const total = computed(() => base.value * 2);

function incrementar19029() {
  base.value++;
}
</script>

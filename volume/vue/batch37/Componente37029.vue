<template>
  <section class="panel-37029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37029");
const base = ref(37029);
const total = computed(() => base.value * 2);

function incrementar37029() {
  base.value++;
}
</script>

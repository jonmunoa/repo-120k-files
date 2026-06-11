<template>
  <section class="panel-23029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23029");
const base = ref(23029);
const total = computed(() => base.value * 2);

function incrementar23029() {
  base.value++;
}
</script>

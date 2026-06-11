<template>
  <section class="panel-42173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42173");
const base = ref(42173);
const total = computed(() => base.value * 2);

function incrementar42173() {
  base.value++;
}
</script>

<template>
  <section class="panel-23969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23969");
const base = ref(23969);
const total = computed(() => base.value * 2);

function incrementar23969() {
  base.value++;
}
</script>

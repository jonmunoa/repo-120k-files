<template>
  <section class="panel-14085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14085");
const base = ref(14085);
const total = computed(() => base.value * 2);

function incrementar14085() {
  base.value++;
}
</script>

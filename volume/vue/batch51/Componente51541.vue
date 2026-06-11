<template>
  <section class="panel-51541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51541");
const base = ref(51541);
const total = computed(() => base.value * 2);

function incrementar51541() {
  base.value++;
}
</script>

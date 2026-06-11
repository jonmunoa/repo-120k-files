<template>
  <section class="panel-16085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16085");
const base = ref(16085);
const total = computed(() => base.value * 2);

function incrementar16085() {
  base.value++;
}
</script>

<template>
  <section class="panel-36085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36085");
const base = ref(36085);
const total = computed(() => base.value * 2);

function incrementar36085() {
  base.value++;
}
</script>

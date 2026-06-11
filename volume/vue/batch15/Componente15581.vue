<template>
  <section class="panel-15581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15581");
const base = ref(15581);
const total = computed(() => base.value * 2);

function incrementar15581() {
  base.value++;
}
</script>

<template>
  <section class="panel-31581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31581");
const base = ref(31581);
const total = computed(() => base.value * 2);

function incrementar31581() {
  base.value++;
}
</script>

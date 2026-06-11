<template>
  <section class="panel-1581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1581");
const base = ref(1581);
const total = computed(() => base.value * 2);

function incrementar1581() {
  base.value++;
}
</script>

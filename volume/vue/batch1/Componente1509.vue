<template>
  <section class="panel-1509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1509");
const base = ref(1509);
const total = computed(() => base.value * 2);

function incrementar1509() {
  base.value++;
}
</script>

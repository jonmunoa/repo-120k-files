<template>
  <section class="panel-29509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29509");
const base = ref(29509);
const total = computed(() => base.value * 2);

function incrementar29509() {
  base.value++;
}
</script>

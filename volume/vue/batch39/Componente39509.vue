<template>
  <section class="panel-39509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39509");
const base = ref(39509);
const total = computed(() => base.value * 2);

function incrementar39509() {
  base.value++;
}
</script>

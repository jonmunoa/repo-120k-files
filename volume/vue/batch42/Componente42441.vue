<template>
  <section class="panel-42441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42441");
const base = ref(42441);
const total = computed(() => base.value * 2);

function incrementar42441() {
  base.value++;
}
</script>

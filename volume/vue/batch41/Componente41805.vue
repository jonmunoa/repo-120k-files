<template>
  <section class="panel-41805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41805");
const base = ref(41805);
const total = computed(() => base.value * 2);

function incrementar41805() {
  base.value++;
}
</script>

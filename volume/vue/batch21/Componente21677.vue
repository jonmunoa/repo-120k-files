<template>
  <section class="panel-21677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21677");
const base = ref(21677);
const total = computed(() => base.value * 2);

function incrementar21677() {
  base.value++;
}
</script>

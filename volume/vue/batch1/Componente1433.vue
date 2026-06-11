<template>
  <section class="panel-1433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1433");
const base = ref(1433);
const total = computed(() => base.value * 2);

function incrementar1433() {
  base.value++;
}
</script>

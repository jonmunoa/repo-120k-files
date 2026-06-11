<template>
  <section class="panel-48433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48433");
const base = ref(48433);
const total = computed(() => base.value * 2);

function incrementar48433() {
  base.value++;
}
</script>

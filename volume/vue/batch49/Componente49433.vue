<template>
  <section class="panel-49433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49433");
const base = ref(49433);
const total = computed(() => base.value * 2);

function incrementar49433() {
  base.value++;
}
</script>

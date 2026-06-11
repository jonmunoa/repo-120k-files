<template>
  <section class="panel-6433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6433");
const base = ref(6433);
const total = computed(() => base.value * 2);

function incrementar6433() {
  base.value++;
}
</script>

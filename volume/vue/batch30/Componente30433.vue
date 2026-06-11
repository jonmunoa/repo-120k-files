<template>
  <section class="panel-30433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30433");
const base = ref(30433);
const total = computed(() => base.value * 2);

function incrementar30433() {
  base.value++;
}
</script>

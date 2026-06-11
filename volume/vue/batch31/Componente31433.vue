<template>
  <section class="panel-31433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31433");
const base = ref(31433);
const total = computed(() => base.value * 2);

function incrementar31433() {
  base.value++;
}
</script>

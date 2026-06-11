<template>
  <section class="panel-29433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29433");
const base = ref(29433);
const total = computed(() => base.value * 2);

function incrementar29433() {
  base.value++;
}
</script>

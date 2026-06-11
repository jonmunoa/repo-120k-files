<template>
  <section class="panel-32433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32433");
const base = ref(32433);
const total = computed(() => base.value * 2);

function incrementar32433() {
  base.value++;
}
</script>

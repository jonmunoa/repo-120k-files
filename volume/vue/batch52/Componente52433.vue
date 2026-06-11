<template>
  <section class="panel-52433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52433");
const base = ref(52433);
const total = computed(() => base.value * 2);

function incrementar52433() {
  base.value++;
}
</script>

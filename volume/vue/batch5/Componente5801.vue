<template>
  <section class="panel-5801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5801");
const base = ref(5801);
const total = computed(() => base.value * 2);

function incrementar5801() {
  base.value++;
}
</script>

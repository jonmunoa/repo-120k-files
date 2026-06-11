<template>
  <section class="panel-5433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5433");
const base = ref(5433);
const total = computed(() => base.value * 2);

function incrementar5433() {
  base.value++;
}
</script>

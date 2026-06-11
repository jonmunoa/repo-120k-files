<template>
  <section class="panel-33433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33433");
const base = ref(33433);
const total = computed(() => base.value * 2);

function incrementar33433() {
  base.value++;
}
</script>

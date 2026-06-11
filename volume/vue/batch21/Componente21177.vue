<template>
  <section class="panel-21177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21177");
const base = ref(21177);
const total = computed(() => base.value * 2);

function incrementar21177() {
  base.value++;
}
</script>

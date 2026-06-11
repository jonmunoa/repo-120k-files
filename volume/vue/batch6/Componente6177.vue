<template>
  <section class="panel-6177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6177");
const base = ref(6177);
const total = computed(() => base.value * 2);

function incrementar6177() {
  base.value++;
}
</script>

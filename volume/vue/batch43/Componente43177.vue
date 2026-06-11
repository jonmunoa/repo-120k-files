<template>
  <section class="panel-43177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43177");
const base = ref(43177);
const total = computed(() => base.value * 2);

function incrementar43177() {
  base.value++;
}
</script>

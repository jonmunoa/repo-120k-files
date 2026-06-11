<template>
  <section class="panel-30061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30061");
const base = ref(30061);
const total = computed(() => base.value * 2);

function incrementar30061() {
  base.value++;
}
</script>

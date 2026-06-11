<template>
  <section class="panel-3061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3061");
const base = ref(3061);
const total = computed(() => base.value * 2);

function incrementar3061() {
  base.value++;
}
</script>

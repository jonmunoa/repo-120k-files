<template>
  <section class="panel-3161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3161");
const base = ref(3161);
const total = computed(() => base.value * 2);

function incrementar3161() {
  base.value++;
}
</script>

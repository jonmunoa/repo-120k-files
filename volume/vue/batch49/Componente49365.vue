<template>
  <section class="panel-49365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49365");
const base = ref(49365);
const total = computed(() => base.value * 2);

function incrementar49365() {
  base.value++;
}
</script>

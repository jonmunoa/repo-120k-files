<template>
  <section class="panel-49805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49805");
const base = ref(49805);
const total = computed(() => base.value * 2);

function incrementar49805() {
  base.value++;
}
</script>

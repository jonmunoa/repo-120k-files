<template>
  <section class="panel-12805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12805");
const base = ref(12805);
const total = computed(() => base.value * 2);

function incrementar12805() {
  base.value++;
}
</script>

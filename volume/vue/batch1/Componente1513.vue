<template>
  <section class="panel-1513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1513");
const base = ref(1513);
const total = computed(() => base.value * 2);

function incrementar1513() {
  base.value++;
}
</script>

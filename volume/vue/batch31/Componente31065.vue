<template>
  <section class="panel-31065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31065");
const base = ref(31065);
const total = computed(() => base.value * 2);

function incrementar31065() {
  base.value++;
}
</script>

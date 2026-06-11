<template>
  <section class="panel-47729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47729");
const base = ref(47729);
const total = computed(() => base.value * 2);

function incrementar47729() {
  base.value++;
}
</script>

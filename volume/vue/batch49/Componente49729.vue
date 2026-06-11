<template>
  <section class="panel-49729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49729");
const base = ref(49729);
const total = computed(() => base.value * 2);

function incrementar49729() {
  base.value++;
}
</script>

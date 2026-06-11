<template>
  <section class="panel-37729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37729");
const base = ref(37729);
const total = computed(() => base.value * 2);

function incrementar37729() {
  base.value++;
}
</script>

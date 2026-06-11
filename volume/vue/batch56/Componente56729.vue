<template>
  <section class="panel-56729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56729");
const base = ref(56729);
const total = computed(() => base.value * 2);

function incrementar56729() {
  base.value++;
}
</script>

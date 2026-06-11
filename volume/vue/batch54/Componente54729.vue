<template>
  <section class="panel-54729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54729");
const base = ref(54729);
const total = computed(() => base.value * 2);

function incrementar54729() {
  base.value++;
}
</script>

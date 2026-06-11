<template>
  <section class="panel-19729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19729");
const base = ref(19729);
const total = computed(() => base.value * 2);

function incrementar19729() {
  base.value++;
}
</script>

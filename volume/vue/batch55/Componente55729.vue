<template>
  <section class="panel-55729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55729");
const base = ref(55729);
const total = computed(() => base.value * 2);

function incrementar55729() {
  base.value++;
}
</script>

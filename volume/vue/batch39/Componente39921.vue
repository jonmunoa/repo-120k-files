<template>
  <section class="panel-39921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39921");
const base = ref(39921);
const total = computed(() => base.value * 2);

function incrementar39921() {
  base.value++;
}
</script>

<template>
  <section class="panel-44877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44877");
const base = ref(44877);
const total = computed(() => base.value * 2);

function incrementar44877() {
  base.value++;
}
</script>

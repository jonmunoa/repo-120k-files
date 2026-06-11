<template>
  <section class="panel-29445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29445");
const base = ref(29445);
const total = computed(() => base.value * 2);

function incrementar29445() {
  base.value++;
}
</script>

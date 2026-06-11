<template>
  <section class="panel-54333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54333");
const base = ref(54333);
const total = computed(() => base.value * 2);

function incrementar54333() {
  base.value++;
}
</script>

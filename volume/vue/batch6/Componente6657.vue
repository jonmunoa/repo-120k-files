<template>
  <section class="panel-6657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6657");
const base = ref(6657);
const total = computed(() => base.value * 2);

function incrementar6657() {
  base.value++;
}
</script>

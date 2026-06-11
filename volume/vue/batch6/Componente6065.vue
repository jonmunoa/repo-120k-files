<template>
  <section class="panel-6065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6065");
const base = ref(6065);
const total = computed(() => base.value * 2);

function incrementar6065() {
  base.value++;
}
</script>

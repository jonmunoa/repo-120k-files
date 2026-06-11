<template>
  <section class="panel-33065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33065");
const base = ref(33065);
const total = computed(() => base.value * 2);

function incrementar33065() {
  base.value++;
}
</script>

<template>
  <section class="panel-50065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50065");
const base = ref(50065);
const total = computed(() => base.value * 2);

function incrementar50065() {
  base.value++;
}
</script>

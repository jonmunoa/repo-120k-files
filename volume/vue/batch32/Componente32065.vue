<template>
  <section class="panel-32065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32065");
const base = ref(32065);
const total = computed(() => base.value * 2);

function incrementar32065() {
  base.value++;
}
</script>

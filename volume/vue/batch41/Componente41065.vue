<template>
  <section class="panel-41065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41065");
const base = ref(41065);
const total = computed(() => base.value * 2);

function incrementar41065() {
  base.value++;
}
</script>

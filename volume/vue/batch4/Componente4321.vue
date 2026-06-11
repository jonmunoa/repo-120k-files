<template>
  <section class="panel-4321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4321");
const base = ref(4321);
const total = computed(() => base.value * 2);

function incrementar4321() {
  base.value++;
}
</script>

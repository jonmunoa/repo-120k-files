<template>
  <section class="panel-49065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49065");
const base = ref(49065);
const total = computed(() => base.value * 2);

function incrementar49065() {
  base.value++;
}
</script>

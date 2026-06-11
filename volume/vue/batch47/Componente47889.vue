<template>
  <section class="panel-47889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47889");
const base = ref(47889);
const total = computed(() => base.value * 2);

function incrementar47889() {
  base.value++;
}
</script>

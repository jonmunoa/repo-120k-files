<template>
  <section class="panel-48065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48065");
const base = ref(48065);
const total = computed(() => base.value * 2);

function incrementar48065() {
  base.value++;
}
</script>

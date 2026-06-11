<template>
  <section class="panel-48093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48093");
const base = ref(48093);
const total = computed(() => base.value * 2);

function incrementar48093() {
  base.value++;
}
</script>

<template>
  <section class="panel-48441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48441");
const base = ref(48441);
const total = computed(() => base.value * 2);

function incrementar48441() {
  base.value++;
}
</script>

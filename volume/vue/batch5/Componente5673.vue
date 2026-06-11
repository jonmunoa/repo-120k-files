<template>
  <section class="panel-5673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5673");
const base = ref(5673);
const total = computed(() => base.value * 2);

function incrementar5673() {
  base.value++;
}
</script>

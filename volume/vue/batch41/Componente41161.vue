<template>
  <section class="panel-41161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41161");
const base = ref(41161);
const total = computed(() => base.value * 2);

function incrementar41161() {
  base.value++;
}
</script>

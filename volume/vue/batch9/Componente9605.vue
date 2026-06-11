<template>
  <section class="panel-9605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9605");
const base = ref(9605);
const total = computed(() => base.value * 2);

function incrementar9605() {
  base.value++;
}
</script>

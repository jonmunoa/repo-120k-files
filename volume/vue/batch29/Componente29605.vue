<template>
  <section class="panel-29605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29605");
const base = ref(29605);
const total = computed(() => base.value * 2);

function incrementar29605() {
  base.value++;
}
</script>

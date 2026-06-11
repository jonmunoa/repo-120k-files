<template>
  <section class="panel-2605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2605");
const base = ref(2605);
const total = computed(() => base.value * 2);

function incrementar2605() {
  base.value++;
}
</script>

<template>
  <section class="panel-9841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9841");
const base = ref(9841);
const total = computed(() => base.value * 2);

function incrementar9841() {
  base.value++;
}
</script>

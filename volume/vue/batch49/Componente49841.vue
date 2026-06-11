<template>
  <section class="panel-49841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49841");
const base = ref(49841);
const total = computed(() => base.value * 2);

function incrementar49841() {
  base.value++;
}
</script>

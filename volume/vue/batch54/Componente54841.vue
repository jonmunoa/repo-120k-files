<template>
  <section class="panel-54841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54841");
const base = ref(54841);
const total = computed(() => base.value * 2);

function incrementar54841() {
  base.value++;
}
</script>

<template>
  <section class="panel-55841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55841");
const base = ref(55841);
const total = computed(() => base.value * 2);

function incrementar55841() {
  base.value++;
}
</script>

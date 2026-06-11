<template>
  <section class="panel-273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 273");
const base = ref(273);
const total = computed(() => base.value * 2);

function incrementar273() {
  base.value++;
}
</script>

<template>
  <section class="panel-39673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39673");
const base = ref(39673);
const total = computed(() => base.value * 2);

function incrementar39673() {
  base.value++;
}
</script>

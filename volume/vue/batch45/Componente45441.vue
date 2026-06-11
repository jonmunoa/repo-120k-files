<template>
  <section class="panel-45441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45441");
const base = ref(45441);
const total = computed(() => base.value * 2);

function incrementar45441() {
  base.value++;
}
</script>

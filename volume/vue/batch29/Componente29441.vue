<template>
  <section class="panel-29441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29441");
const base = ref(29441);
const total = computed(() => base.value * 2);

function incrementar29441() {
  base.value++;
}
</script>

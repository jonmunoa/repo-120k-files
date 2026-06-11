<template>
  <section class="panel-45833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45833");
const base = ref(45833);
const total = computed(() => base.value * 2);

function incrementar45833() {
  base.value++;
}
</script>

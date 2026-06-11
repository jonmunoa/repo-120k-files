<template>
  <section class="panel-23065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23065");
const base = ref(23065);
const total = computed(() => base.value * 2);

function incrementar23065() {
  base.value++;
}
</script>

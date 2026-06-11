<template>
  <section class="panel-29973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29973");
const base = ref(29973);
const total = computed(() => base.value * 2);

function incrementar29973() {
  base.value++;
}
</script>

<template>
  <section class="panel-1973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1973");
const base = ref(1973);
const total = computed(() => base.value * 2);

function incrementar1973() {
  base.value++;
}
</script>

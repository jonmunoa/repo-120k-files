<template>
  <section class="panel-12973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12973");
const base = ref(12973);
const total = computed(() => base.value * 2);

function incrementar12973() {
  base.value++;
}
</script>

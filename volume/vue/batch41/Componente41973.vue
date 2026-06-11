<template>
  <section class="panel-41973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41973");
const base = ref(41973);
const total = computed(() => base.value * 2);

function incrementar41973() {
  base.value++;
}
</script>

<template>
  <section class="panel-53973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53973");
const base = ref(53973);
const total = computed(() => base.value * 2);

function incrementar53973() {
  base.value++;
}
</script>

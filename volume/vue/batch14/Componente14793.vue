<template>
  <section class="panel-14793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14793");
const base = ref(14793);
const total = computed(() => base.value * 2);

function incrementar14793() {
  base.value++;
}
</script>

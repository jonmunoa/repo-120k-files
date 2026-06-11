<template>
  <section class="panel-19757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19757");
const base = ref(19757);
const total = computed(() => base.value * 2);

function incrementar19757() {
  base.value++;
}
</script>

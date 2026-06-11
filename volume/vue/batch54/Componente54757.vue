<template>
  <section class="panel-54757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54757");
const base = ref(54757);
const total = computed(() => base.value * 2);

function incrementar54757() {
  base.value++;
}
</script>

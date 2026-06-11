<template>
  <section class="panel-32757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32757");
const base = ref(32757);
const total = computed(() => base.value * 2);

function incrementar32757() {
  base.value++;
}
</script>

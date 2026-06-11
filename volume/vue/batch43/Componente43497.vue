<template>
  <section class="panel-43497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43497");
const base = ref(43497);
const total = computed(() => base.value * 2);

function incrementar43497() {
  base.value++;
}
</script>

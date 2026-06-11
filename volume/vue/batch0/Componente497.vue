<template>
  <section class="panel-497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 497");
const base = ref(497);
const total = computed(() => base.value * 2);

function incrementar497() {
  base.value++;
}
</script>

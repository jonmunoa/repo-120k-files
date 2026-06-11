<template>
  <section class="panel-31497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31497");
const base = ref(31497);
const total = computed(() => base.value * 2);

function incrementar31497() {
  base.value++;
}
</script>

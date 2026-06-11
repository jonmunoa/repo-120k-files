<template>
  <section class="panel-41497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41497");
const base = ref(41497);
const total = computed(() => base.value * 2);

function incrementar41497() {
  base.value++;
}
</script>

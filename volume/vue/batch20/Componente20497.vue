<template>
  <section class="panel-20497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20497");
const base = ref(20497);
const total = computed(() => base.value * 2);

function incrementar20497() {
  base.value++;
}
</script>

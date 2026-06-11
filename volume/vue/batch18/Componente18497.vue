<template>
  <section class="panel-18497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18497");
const base = ref(18497);
const total = computed(() => base.value * 2);

function incrementar18497() {
  base.value++;
}
</script>

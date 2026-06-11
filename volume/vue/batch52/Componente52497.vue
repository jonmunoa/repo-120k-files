<template>
  <section class="panel-52497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52497");
const base = ref(52497);
const total = computed(() => base.value * 2);

function incrementar52497() {
  base.value++;
}
</script>

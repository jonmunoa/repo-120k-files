<template>
  <section class="panel-5497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5497");
const base = ref(5497);
const total = computed(() => base.value * 2);

function incrementar5497() {
  base.value++;
}
</script>

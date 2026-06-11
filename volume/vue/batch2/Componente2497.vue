<template>
  <section class="panel-2497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2497");
const base = ref(2497);
const total = computed(() => base.value * 2);

function incrementar2497() {
  base.value++;
}
</script>

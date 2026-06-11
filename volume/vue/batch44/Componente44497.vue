<template>
  <section class="panel-44497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44497");
const base = ref(44497);
const total = computed(() => base.value * 2);

function incrementar44497() {
  base.value++;
}
</script>

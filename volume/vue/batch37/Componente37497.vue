<template>
  <section class="panel-37497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37497");
const base = ref(37497);
const total = computed(() => base.value * 2);

function incrementar37497() {
  base.value++;
}
</script>

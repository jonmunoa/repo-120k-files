<template>
  <section class="panel-7497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7497");
const base = ref(7497);
const total = computed(() => base.value * 2);

function incrementar7497() {
  base.value++;
}
</script>

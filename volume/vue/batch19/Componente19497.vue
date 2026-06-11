<template>
  <section class="panel-19497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19497");
const base = ref(19497);
const total = computed(() => base.value * 2);

function incrementar19497() {
  base.value++;
}
</script>

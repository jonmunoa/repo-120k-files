<template>
  <section class="panel-48497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48497");
const base = ref(48497);
const total = computed(() => base.value * 2);

function incrementar48497() {
  base.value++;
}
</script>

<template>
  <section class="panel-4497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4497");
const base = ref(4497);
const total = computed(() => base.value * 2);

function incrementar4497() {
  base.value++;
}
</script>

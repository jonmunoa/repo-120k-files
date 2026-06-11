<template>
  <section class="panel-9497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9497");
const base = ref(9497);
const total = computed(() => base.value * 2);

function incrementar9497() {
  base.value++;
}
</script>

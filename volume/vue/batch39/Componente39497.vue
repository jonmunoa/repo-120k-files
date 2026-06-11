<template>
  <section class="panel-39497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39497");
const base = ref(39497);
const total = computed(() => base.value * 2);

function incrementar39497() {
  base.value++;
}
</script>

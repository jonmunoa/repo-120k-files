<template>
  <section class="panel-30497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30497");
const base = ref(30497);
const total = computed(() => base.value * 2);

function incrementar30497() {
  base.value++;
}
</script>

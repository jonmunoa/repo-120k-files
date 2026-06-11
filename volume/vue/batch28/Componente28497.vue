<template>
  <section class="panel-28497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28497");
const base = ref(28497);
const total = computed(() => base.value * 2);

function incrementar28497() {
  base.value++;
}
</script>

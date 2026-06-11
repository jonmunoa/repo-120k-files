<template>
  <section class="panel-54025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54025");
const base = ref(54025);
const total = computed(() => base.value * 2);

function incrementar54025() {
  base.value++;
}
</script>

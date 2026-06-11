<template>
  <section class="panel-15025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15025");
const base = ref(15025);
const total = computed(() => base.value * 2);

function incrementar15025() {
  base.value++;
}
</script>

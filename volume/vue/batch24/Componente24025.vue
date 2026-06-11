<template>
  <section class="panel-24025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24025");
const base = ref(24025);
const total = computed(() => base.value * 2);

function incrementar24025() {
  base.value++;
}
</script>

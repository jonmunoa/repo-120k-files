<template>
  <section class="panel-19505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19505");
const base = ref(19505);
const total = computed(() => base.value * 2);

function incrementar19505() {
  base.value++;
}
</script>

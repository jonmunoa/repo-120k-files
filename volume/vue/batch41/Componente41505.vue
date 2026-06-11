<template>
  <section class="panel-41505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41505");
const base = ref(41505);
const total = computed(() => base.value * 2);

function incrementar41505() {
  base.value++;
}
</script>

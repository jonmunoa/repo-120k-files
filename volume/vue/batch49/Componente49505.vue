<template>
  <section class="panel-49505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49505");
const base = ref(49505);
const total = computed(() => base.value * 2);

function incrementar49505() {
  base.value++;
}
</script>

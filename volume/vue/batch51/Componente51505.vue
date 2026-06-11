<template>
  <section class="panel-51505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51505");
const base = ref(51505);
const total = computed(() => base.value * 2);

function incrementar51505() {
  base.value++;
}
</script>

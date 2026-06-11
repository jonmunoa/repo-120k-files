<template>
  <section class="panel-23389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23389");
const base = ref(23389);
const total = computed(() => base.value * 2);

function incrementar23389() {
  base.value++;
}
</script>

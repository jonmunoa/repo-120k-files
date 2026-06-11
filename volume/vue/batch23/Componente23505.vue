<template>
  <section class="panel-23505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23505");
const base = ref(23505);
const total = computed(() => base.value * 2);

function incrementar23505() {
  base.value++;
}
</script>

<template>
  <section class="panel-5505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5505");
const base = ref(5505);
const total = computed(() => base.value * 2);

function incrementar5505() {
  base.value++;
}
</script>

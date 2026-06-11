<template>
  <section class="panel-1505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1505");
const base = ref(1505);
const total = computed(() => base.value * 2);

function incrementar1505() {
  base.value++;
}
</script>

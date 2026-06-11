<template>
  <section class="panel-24225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24225");
const base = ref(24225);
const total = computed(() => base.value * 2);

function incrementar24225() {
  base.value++;
}
</script>

<template>
  <section class="panel-24249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24249");
const base = ref(24249);
const total = computed(() => base.value * 2);

function incrementar24249() {
  base.value++;
}
</script>

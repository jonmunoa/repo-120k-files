<template>
  <section class="panel-249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 249");
const base = ref(249);
const total = computed(() => base.value * 2);

function incrementar249() {
  base.value++;
}
</script>

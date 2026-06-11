<template>
  <section class="panel-22249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22249");
const base = ref(22249);
const total = computed(() => base.value * 2);

function incrementar22249() {
  base.value++;
}
</script>

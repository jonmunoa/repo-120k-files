<template>
  <section class="panel-10401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10401");
const base = ref(10401);
const total = computed(() => base.value * 2);

function incrementar10401() {
  base.value++;
}
</script>

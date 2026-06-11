<template>
  <section class="panel-42401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42401");
const base = ref(42401);
const total = computed(() => base.value * 2);

function incrementar42401() {
  base.value++;
}
</script>

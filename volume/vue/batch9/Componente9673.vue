<template>
  <section class="panel-9673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9673");
const base = ref(9673);
const total = computed(() => base.value * 2);

function incrementar9673() {
  base.value++;
}
</script>

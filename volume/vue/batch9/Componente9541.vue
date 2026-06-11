<template>
  <section class="panel-9541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9541");
const base = ref(9541);
const total = computed(() => base.value * 2);

function incrementar9541() {
  base.value++;
}
</script>

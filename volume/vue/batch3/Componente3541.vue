<template>
  <section class="panel-3541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3541");
const base = ref(3541);
const total = computed(() => base.value * 2);

function incrementar3541() {
  base.value++;
}
</script>

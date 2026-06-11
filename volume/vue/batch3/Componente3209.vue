<template>
  <section class="panel-3209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3209");
const base = ref(3209);
const total = computed(() => base.value * 2);

function incrementar3209() {
  base.value++;
}
</script>

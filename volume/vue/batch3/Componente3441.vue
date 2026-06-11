<template>
  <section class="panel-3441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3441");
const base = ref(3441);
const total = computed(() => base.value * 2);

function incrementar3441() {
  base.value++;
}
</script>

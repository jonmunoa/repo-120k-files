<template>
  <section class="panel-41441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41441");
const base = ref(41441);
const total = computed(() => base.value * 2);

function incrementar41441() {
  base.value++;
}
</script>

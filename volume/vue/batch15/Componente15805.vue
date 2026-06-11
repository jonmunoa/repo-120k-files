<template>
  <section class="panel-15805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15805");
const base = ref(15805);
const total = computed(() => base.value * 2);

function incrementar15805() {
  base.value++;
}
</script>

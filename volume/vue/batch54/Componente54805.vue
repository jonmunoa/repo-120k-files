<template>
  <section class="panel-54805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54805");
const base = ref(54805);
const total = computed(() => base.value * 2);

function incrementar54805() {
  base.value++;
}
</script>

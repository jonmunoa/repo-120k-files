<template>
  <section class="panel-51949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51949");
const base = ref(51949);
const total = computed(() => base.value * 2);

function incrementar51949() {
  base.value++;
}
</script>

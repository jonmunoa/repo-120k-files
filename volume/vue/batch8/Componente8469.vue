<template>
  <section class="panel-8469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8469");
const base = ref(8469);
const total = computed(() => base.value * 2);

function incrementar8469() {
  base.value++;
}
</script>

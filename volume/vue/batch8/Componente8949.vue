<template>
  <section class="panel-8949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8949");
const base = ref(8949);
const total = computed(() => base.value * 2);

function incrementar8949() {
  base.value++;
}
</script>

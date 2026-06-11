<template>
  <section class="panel-5681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5681");
const base = ref(5681);
const total = computed(() => base.value * 2);

function incrementar5681() {
  base.value++;
}
</script>

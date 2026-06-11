<template>
  <section class="panel-40793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40793");
const base = ref(40793);
const total = computed(() => base.value * 2);

function incrementar40793() {
  base.value++;
}
</script>

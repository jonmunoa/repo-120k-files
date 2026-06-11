<template>
  <section class="panel-15793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15793");
const base = ref(15793);
const total = computed(() => base.value * 2);

function incrementar15793() {
  base.value++;
}
</script>

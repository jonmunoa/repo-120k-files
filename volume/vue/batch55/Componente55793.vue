<template>
  <section class="panel-55793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55793");
const base = ref(55793);
const total = computed(() => base.value * 2);

function incrementar55793() {
  base.value++;
}
</script>

<template>
  <section class="panel-11793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11793");
const base = ref(11793);
const total = computed(() => base.value * 2);

function incrementar11793() {
  base.value++;
}
</script>

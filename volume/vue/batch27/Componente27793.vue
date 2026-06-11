<template>
  <section class="panel-27793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27793");
const base = ref(27793);
const total = computed(() => base.value * 2);

function incrementar27793() {
  base.value++;
}
</script>

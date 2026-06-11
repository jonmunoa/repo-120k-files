<template>
  <section class="panel-39173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39173");
const base = ref(39173);
const total = computed(() => base.value * 2);

function incrementar39173() {
  base.value++;
}
</script>

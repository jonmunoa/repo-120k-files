<template>
  <section class="panel-44173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44173");
const base = ref(44173);
const total = computed(() => base.value * 2);

function incrementar44173() {
  base.value++;
}
</script>

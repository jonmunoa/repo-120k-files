<template>
  <section class="panel-49173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49173");
const base = ref(49173);
const total = computed(() => base.value * 2);

function incrementar49173() {
  base.value++;
}
</script>

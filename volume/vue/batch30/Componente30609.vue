<template>
  <section class="panel-30609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30609");
const base = ref(30609);
const total = computed(() => base.value * 2);

function incrementar30609() {
  base.value++;
}
</script>

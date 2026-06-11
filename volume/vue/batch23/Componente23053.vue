<template>
  <section class="panel-23053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23053");
const base = ref(23053);
const total = computed(() => base.value * 2);

function incrementar23053() {
  base.value++;
}
</script>

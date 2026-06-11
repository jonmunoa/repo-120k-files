<template>
  <section class="panel-36053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36053");
const base = ref(36053);
const total = computed(() => base.value * 2);

function incrementar36053() {
  base.value++;
}
</script>

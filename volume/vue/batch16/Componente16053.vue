<template>
  <section class="panel-16053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16053");
const base = ref(16053);
const total = computed(() => base.value * 2);

function incrementar16053() {
  base.value++;
}
</script>

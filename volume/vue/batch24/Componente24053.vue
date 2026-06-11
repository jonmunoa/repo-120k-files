<template>
  <section class="panel-24053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24053");
const base = ref(24053);
const total = computed(() => base.value * 2);

function incrementar24053() {
  base.value++;
}
</script>

<template>
  <section class="panel-44053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44053");
const base = ref(44053);
const total = computed(() => base.value * 2);

function incrementar44053() {
  base.value++;
}
</script>

<template>
  <section class="panel-19053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19053");
const base = ref(19053);
const total = computed(() => base.value * 2);

function incrementar19053() {
  base.value++;
}
</script>

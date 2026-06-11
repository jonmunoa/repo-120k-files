<template>
  <section class="panel-22201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22201");
const base = ref(22201);
const total = computed(() => base.value * 2);

function incrementar22201() {
  base.value++;
}
</script>

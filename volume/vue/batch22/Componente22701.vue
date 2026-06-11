<template>
  <section class="panel-22701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22701");
const base = ref(22701);
const total = computed(() => base.value * 2);

function incrementar22701() {
  base.value++;
}
</script>

<template>
  <section class="panel-22405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22405");
const base = ref(22405);
const total = computed(() => base.value * 2);

function incrementar22405() {
  base.value++;
}
</script>

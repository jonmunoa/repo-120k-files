<template>
  <section class="panel-22321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22321");
const base = ref(22321);
const total = computed(() => base.value * 2);

function incrementar22321() {
  base.value++;
}
</script>

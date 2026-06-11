<template>
  <section class="panel-48321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48321");
const base = ref(48321);
const total = computed(() => base.value * 2);

function incrementar48321() {
  base.value++;
}
</script>

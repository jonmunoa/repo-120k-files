<template>
  <section class="panel-24321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24321");
const base = ref(24321);
const total = computed(() => base.value * 2);

function incrementar24321() {
  base.value++;
}
</script>

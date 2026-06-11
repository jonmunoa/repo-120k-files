<template>
  <section class="panel-36321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36321");
const base = ref(36321);
const total = computed(() => base.value * 2);

function incrementar36321() {
  base.value++;
}
</script>

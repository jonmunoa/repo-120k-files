<template>
  <section class="panel-13889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13889");
const base = ref(13889);
const total = computed(() => base.value * 2);

function incrementar13889() {
  base.value++;
}
</script>

<template>
  <section class="panel-36205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36205");
const base = ref(36205);
const total = computed(() => base.value * 2);

function incrementar36205() {
  base.value++;
}
</script>

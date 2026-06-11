<template>
  <section class="panel-48201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48201");
const base = ref(48201);
const total = computed(() => base.value * 2);

function incrementar48201() {
  base.value++;
}
</script>

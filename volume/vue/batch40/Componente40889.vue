<template>
  <section class="panel-40889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40889");
const base = ref(40889);
const total = computed(() => base.value * 2);

function incrementar40889() {
  base.value++;
}
</script>

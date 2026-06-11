<template>
  <section class="panel-16941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16941");
const base = ref(16941);
const total = computed(() => base.value * 2);

function incrementar16941() {
  base.value++;
}
</script>

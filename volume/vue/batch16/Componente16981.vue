<template>
  <section class="panel-16981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16981");
const base = ref(16981);
const total = computed(() => base.value * 2);

function incrementar16981() {
  base.value++;
}
</script>

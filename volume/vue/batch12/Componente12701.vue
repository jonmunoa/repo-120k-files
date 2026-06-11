<template>
  <section class="panel-12701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12701");
const base = ref(12701);
const total = computed(() => base.value * 2);

function incrementar12701() {
  base.value++;
}
</script>

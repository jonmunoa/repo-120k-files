<template>
  <section class="panel-23629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23629");
const base = ref(23629);
const total = computed(() => base.value * 2);

function incrementar23629() {
  base.value++;
}
</script>

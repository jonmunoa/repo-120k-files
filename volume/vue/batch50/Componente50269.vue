<template>
  <section class="panel-50269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50269");
const base = ref(50269);
const total = computed(() => base.value * 2);

function incrementar50269() {
  base.value++;
}
</script>

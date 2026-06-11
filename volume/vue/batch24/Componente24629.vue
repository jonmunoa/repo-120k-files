<template>
  <section class="panel-24629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24629");
const base = ref(24629);
const total = computed(() => base.value * 2);

function incrementar24629() {
  base.value++;
}
</script>

<template>
  <section class="panel-12629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12629");
const base = ref(12629);
const total = computed(() => base.value * 2);

function incrementar12629() {
  base.value++;
}
</script>

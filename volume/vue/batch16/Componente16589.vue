<template>
  <section class="panel-16589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16589");
const base = ref(16589);
const total = computed(() => base.value * 2);

function incrementar16589() {
  base.value++;
}
</script>

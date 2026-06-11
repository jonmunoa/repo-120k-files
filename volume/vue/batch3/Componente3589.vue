<template>
  <section class="panel-3589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3589");
const base = ref(3589);
const total = computed(() => base.value * 2);

function incrementar3589() {
  base.value++;
}
</script>

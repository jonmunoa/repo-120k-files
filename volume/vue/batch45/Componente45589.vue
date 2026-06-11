<template>
  <section class="panel-45589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45589");
const base = ref(45589);
const total = computed(() => base.value * 2);

function incrementar45589() {
  base.value++;
}
</script>

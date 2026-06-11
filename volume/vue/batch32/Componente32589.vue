<template>
  <section class="panel-32589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32589");
const base = ref(32589);
const total = computed(() => base.value * 2);

function incrementar32589() {
  base.value++;
}
</script>

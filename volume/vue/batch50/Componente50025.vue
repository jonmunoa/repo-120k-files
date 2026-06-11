<template>
  <section class="panel-50025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50025");
const base = ref(50025);
const total = computed(() => base.value * 2);

function incrementar50025() {
  base.value++;
}
</script>

<template>
  <section class="panel-6025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6025");
const base = ref(6025);
const total = computed(() => base.value * 2);

function incrementar6025() {
  base.value++;
}
</script>

<template>
  <section class="panel-56025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56025");
const base = ref(56025);
const total = computed(() => base.value * 2);

function incrementar56025() {
  base.value++;
}
</script>

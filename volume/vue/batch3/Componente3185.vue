<template>
  <section class="panel-3185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3185");
const base = ref(3185);
const total = computed(() => base.value * 2);

function incrementar3185() {
  base.value++;
}
</script>

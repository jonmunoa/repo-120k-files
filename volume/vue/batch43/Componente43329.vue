<template>
  <section class="panel-43329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43329");
const base = ref(43329);
const total = computed(() => base.value * 2);

function incrementar43329() {
  base.value++;
}
</script>

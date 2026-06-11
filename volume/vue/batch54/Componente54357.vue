<template>
  <section class="panel-54357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54357");
const base = ref(54357);
const total = computed(() => base.value * 2);

function incrementar54357() {
  base.value++;
}
</script>

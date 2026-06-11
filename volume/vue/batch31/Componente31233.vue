<template>
  <section class="panel-31233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31233");
const base = ref(31233);
const total = computed(() => base.value * 2);

function incrementar31233() {
  base.value++;
}
</script>

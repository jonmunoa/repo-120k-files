<template>
  <section class="panel-36685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36685");
const base = ref(36685);
const total = computed(() => base.value * 2);

function incrementar36685() {
  base.value++;
}
</script>

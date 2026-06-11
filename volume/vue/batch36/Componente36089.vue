<template>
  <section class="panel-36089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36089");
const base = ref(36089);
const total = computed(() => base.value * 2);

function incrementar36089() {
  base.value++;
}
</script>

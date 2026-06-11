<template>
  <section class="panel-36977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36977");
const base = ref(36977);
const total = computed(() => base.value * 2);

function incrementar36977() {
  base.value++;
}
</script>

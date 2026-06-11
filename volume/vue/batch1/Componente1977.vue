<template>
  <section class="panel-1977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1977");
const base = ref(1977);
const total = computed(() => base.value * 2);

function incrementar1977() {
  base.value++;
}
</script>

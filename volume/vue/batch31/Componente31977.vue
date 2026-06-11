<template>
  <section class="panel-31977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31977");
const base = ref(31977);
const total = computed(() => base.value * 2);

function incrementar31977() {
  base.value++;
}
</script>

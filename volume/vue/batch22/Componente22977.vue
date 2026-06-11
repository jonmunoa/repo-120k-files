<template>
  <section class="panel-22977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22977");
const base = ref(22977);
const total = computed(() => base.value * 2);

function incrementar22977() {
  base.value++;
}
</script>

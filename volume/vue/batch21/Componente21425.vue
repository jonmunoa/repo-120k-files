<template>
  <section class="panel-21425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21425");
const base = ref(21425);
const total = computed(() => base.value * 2);

function incrementar21425() {
  base.value++;
}
</script>

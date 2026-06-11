<template>
  <section class="panel-22313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22313");
const base = ref(22313);
const total = computed(() => base.value * 2);

function incrementar22313() {
  base.value++;
}
</script>

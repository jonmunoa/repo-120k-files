<template>
  <section class="panel-12313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12313");
const base = ref(12313);
const total = computed(() => base.value * 2);

function incrementar12313() {
  base.value++;
}
</script>

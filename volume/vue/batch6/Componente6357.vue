<template>
  <section class="panel-6357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6357");
const base = ref(6357);
const total = computed(() => base.value * 2);

function incrementar6357() {
  base.value++;
}
</script>

<template>
  <section class="panel-50485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50485");
const base = ref(50485);
const total = computed(() => base.value * 2);

function incrementar50485() {
  base.value++;
}
</script>

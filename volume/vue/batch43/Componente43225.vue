<template>
  <section class="panel-43225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43225");
const base = ref(43225);
const total = computed(() => base.value * 2);

function incrementar43225() {
  base.value++;
}
</script>

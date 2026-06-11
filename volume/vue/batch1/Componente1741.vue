<template>
  <section class="panel-1741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1741");
const base = ref(1741);
const total = computed(() => base.value * 2);

function incrementar1741() {
  base.value++;
}
</script>

<template>
  <section class="panel-4149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4149");
const base = ref(4149);
const total = computed(() => base.value * 2);

function incrementar4149() {
  base.value++;
}
</script>

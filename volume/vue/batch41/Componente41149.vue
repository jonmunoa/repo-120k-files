<template>
  <section class="panel-41149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41149");
const base = ref(41149);
const total = computed(() => base.value * 2);

function incrementar41149() {
  base.value++;
}
</script>

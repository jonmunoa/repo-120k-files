<template>
  <section class="panel-50149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50149");
const base = ref(50149);
const total = computed(() => base.value * 2);

function incrementar50149() {
  base.value++;
}
</script>

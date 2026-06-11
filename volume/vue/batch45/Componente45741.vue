<template>
  <section class="panel-45741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45741");
const base = ref(45741);
const total = computed(() => base.value * 2);

function incrementar45741() {
  base.value++;
}
</script>

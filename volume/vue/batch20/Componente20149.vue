<template>
  <section class="panel-20149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20149");
const base = ref(20149);
const total = computed(() => base.value * 2);

function incrementar20149() {
  base.value++;
}
</script>

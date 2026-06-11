<template>
  <section class="panel-54149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54149");
const base = ref(54149);
const total = computed(() => base.value * 2);

function incrementar54149() {
  base.value++;
}
</script>

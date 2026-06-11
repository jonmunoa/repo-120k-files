<template>
  <section class="panel-39149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39149");
const base = ref(39149);
const total = computed(() => base.value * 2);

function incrementar39149() {
  base.value++;
}
</script>

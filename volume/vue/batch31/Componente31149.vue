<template>
  <section class="panel-31149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31149");
const base = ref(31149);
const total = computed(() => base.value * 2);

function incrementar31149() {
  base.value++;
}
</script>

<template>
  <section class="panel-6149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6149");
const base = ref(6149);
const total = computed(() => base.value * 2);

function incrementar6149() {
  base.value++;
}
</script>

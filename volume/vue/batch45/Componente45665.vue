<template>
  <section class="panel-45665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45665");
const base = ref(45665);
const total = computed(() => base.value * 2);

function incrementar45665() {
  base.value++;
}
</script>

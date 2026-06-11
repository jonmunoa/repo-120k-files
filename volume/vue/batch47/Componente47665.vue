<template>
  <section class="panel-47665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47665");
const base = ref(47665);
const total = computed(() => base.value * 2);

function incrementar47665() {
  base.value++;
}
</script>

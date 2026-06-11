<template>
  <section class="panel-24437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24437");
const base = ref(24437);
const total = computed(() => base.value * 2);

function incrementar24437() {
  base.value++;
}
</script>

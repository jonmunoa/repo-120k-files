<template>
  <section class="panel-22613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22613");
const base = ref(22613);
const total = computed(() => base.value * 2);

function incrementar22613() {
  base.value++;
}
</script>

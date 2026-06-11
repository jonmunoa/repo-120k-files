<template>
  <section class="panel-2837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2837");
const base = ref(2837);
const total = computed(() => base.value * 2);

function incrementar2837() {
  base.value++;
}
</script>

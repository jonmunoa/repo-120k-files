<template>
  <section class="panel-7137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7137");
const base = ref(7137);
const total = computed(() => base.value * 2);

function incrementar7137() {
  base.value++;
}
</script>

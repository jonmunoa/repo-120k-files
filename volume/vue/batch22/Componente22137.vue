<template>
  <section class="panel-22137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22137");
const base = ref(22137);
const total = computed(() => base.value * 2);

function incrementar22137() {
  base.value++;
}
</script>

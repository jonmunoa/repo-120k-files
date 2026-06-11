<template>
  <section class="panel-12137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12137");
const base = ref(12137);
const total = computed(() => base.value * 2);

function incrementar12137() {
  base.value++;
}
</script>

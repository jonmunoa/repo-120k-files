<template>
  <section class="panel-6981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6981");
const base = ref(6981);
const total = computed(() => base.value * 2);

function incrementar6981() {
  base.value++;
}
</script>

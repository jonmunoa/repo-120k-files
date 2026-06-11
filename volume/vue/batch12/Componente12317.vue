<template>
  <section class="panel-12317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12317");
const base = ref(12317);
const total = computed(() => base.value * 2);

function incrementar12317() {
  base.value++;
}
</script>

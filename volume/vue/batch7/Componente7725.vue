<template>
  <section class="panel-7725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7725");
const base = ref(7725);
const total = computed(() => base.value * 2);

function incrementar7725() {
  base.value++;
}
</script>

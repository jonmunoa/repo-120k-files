<template>
  <section class="panel-56725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56725");
const base = ref(56725);
const total = computed(() => base.value * 2);

function incrementar56725() {
  base.value++;
}
</script>

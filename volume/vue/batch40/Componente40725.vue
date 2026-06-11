<template>
  <section class="panel-40725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40725");
const base = ref(40725);
const total = computed(() => base.value * 2);

function incrementar40725() {
  base.value++;
}
</script>

<template>
  <section class="panel-12829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12829");
const base = ref(12829);
const total = computed(() => base.value * 2);

function incrementar12829() {
  base.value++;
}
</script>

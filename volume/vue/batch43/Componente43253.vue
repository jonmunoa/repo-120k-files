<template>
  <section class="panel-43253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43253");
const base = ref(43253);
const total = computed(() => base.value * 2);

function incrementar43253() {
  base.value++;
}
</script>

<template>
  <section class="panel-12481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12481");
const base = ref(12481);
const total = computed(() => base.value * 2);

function incrementar12481() {
  base.value++;
}
</script>

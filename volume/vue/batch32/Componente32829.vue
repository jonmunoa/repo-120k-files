<template>
  <section class="panel-32829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32829");
const base = ref(32829);
const total = computed(() => base.value * 2);

function incrementar32829() {
  base.value++;
}
</script>

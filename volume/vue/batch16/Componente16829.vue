<template>
  <section class="panel-16829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16829");
const base = ref(16829);
const total = computed(() => base.value * 2);

function incrementar16829() {
  base.value++;
}
</script>
